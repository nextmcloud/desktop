/*
 * Copyright (C) 2024 by Claudio Cambra <claudio.cambra@nextcloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

import ArgumentParser
import Foundation

struct MacCrafter: ParsableCommand {
    static let configuration = CommandConfiguration(
        abstract: "A Swift command-line tool to manage blog post banners"
    )

    enum MacCrafterError: Error {
        case failedEnumeration(String)
    }

    @Argument var codeSignIdentity: String

    mutating func run() throws {
        print("Configuring build tooling.")

        try installIfMissing("git", "xcode-select --install")
        try installIfMissing(
            "brew",
            "curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh | /bin/bash",
            installCommandEnv: ["NONINTERACTIVE": "1"]
        )
        try installIfMissing("inkscape", "brew install inkscape")
        try installIfMissing("python3", "brew install pyenv && pyenv install 3.12.4")

        print("Build tooling configured.")
        print("Configuring KDE Craft.")

        let fm = FileManager.default
        let currentDir = fm.currentDirectoryPath
        let craftMasterDir = "\(currentDir)/craftmaster"

        if fm.fileExists(atPath: craftMasterDir) {
            print("KDE Craft is already cloned.")
        } else {
            print("Cloning KDE Craft...")
            shell("git clone --depth=1 https://invent.kde.org/packaging/craftmaster.git \(craftMasterDir)")
        }

        print("Configuring Nextcloud Desktop Client blueprints for KDE Craft...")

        let repoRootDir = "\(currentDir)/../.."
        let craftMasterIni = "\(repoRootDir)/craftmaster.ini"
        let craftMasterPy = "\(craftMasterDir)/CraftMaster.py"
        let craftTarget = "macos-clang-arm64"
        let craftCommand = "python3 \(craftMasterPy) --config \(craftMasterIni) --target \(craftTarget) -c"
        let clientBlueprintsGitUrl = "https://github.com/nextcloud/desktop-client-blueprints.git"
        shell("\(craftCommand) --add-blueprint-repository \(clientBlueprintsGitUrl)")

        print("Crafting KDE Craft...")
        shell("\(craftCommand) craft")

        print("Crafting Nextcloud Desktop Client dependencies...")
        shell("\(craftCommand) --install-deps nextcloud-client")

        print("Code-signing Nextcloud Desktop Client libraries and frameworks...")

        let craftLibDir = "\(currentDir)/\(craftTarget)/lib"
        let craftLibs = try fm.contentsOfDirectory(atPath: craftLibDir)
        for lib in craftLibs {
            let libPath = "\(craftLibDir)/\(lib)"
            guard lib.hasSuffix(".dylib") || lib.hasSuffix(".framework") else { continue }
            try codesign(identity: codeSignIdentity, path: libPath)
        }

        let craftPluginsDir = "\(currentDir)/\(craftTarget)/plugins"
        guard let craftPluginsEnumerator = fm.enumerator(atPath: craftPluginsDir) else {
            throw MacCrafterError.failedEnumeration("Failed to list craft plugins directory.")
        }

        for case let plugin as String in craftPluginsEnumerator {
            let pluginPath = "\(craftPluginsDir)/\(plugin)"
            guard plugin.hasSuffix(".dylib") || plugin.hasSuffix(".framework") else { continue }
            try codesign(identity: codeSignIdentity, path: pluginPath)
        }

        print("Crafting Nextcloud Desktop Client...")
        shell("\(craftCommand) --src-dir \(repoRootDir) nextcloud-client")
    }
}

MacCrafter.main()

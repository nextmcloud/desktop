/*
 * SPDX-FileCopyrightText: 2026 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

import QtQuick
import QtTest
import com.nextcloud.desktopclient
import Style

import "../../../src/gui/wizard/qml"

Item {
    id: testRoot

    width: 200
    height: 100

    Component {
        id: controllerComponent

        AccountWizardController {}
    }

    Component {
        id: windowComponent

        AccountWizardWindow {}
    }

    TestCase {
        id: testCase

        property var wizard: null

        name: "AccountWizardWindow"
        when: windowShown

        function createWizard(step) {
            const controller = createTemporaryObject(controllerComponent, testRoot, { currentStep: step })
            verify(controller)
            wizard = windowComponent.createObject(testRoot, { controller: controller, visible: true })
            verify(wizard)
            return wizard
        }

        // The window must go before its temporary controller, which is destroyed right after cleanup().
        function cleanup() {
            if (wizard) {
                wizard.destroy()
                wizard = null
                wait(0)
            }
            Theme.wizardHideSelfHostButton = false
            Theme.wizardHideSignupButton = false
        }

        function findVisibleButton(item, text) {
            if (item.visible && item.text === text && item.hasOwnProperty("clicked")) {
                return item
            }
            for (let i = 0; i < item.children.length; ++i) {
                const found = findVisibleButton(item.children[i], text)
                if (found) {
                    return found
                }
            }
            return null
        }

        function buttonLabel(button) {
            for (let i = 0; i < button.contentItem.children.length; ++i) {
                const child = button.contentItem.children[i]
                if (child.objectName === "wizardButtonText") {
                    return child
                }
            }
            return null
        }

        function relabel(wizard, text, newText) {
            const button = findVisibleButton(wizard.contentItem, text)
            verify(button, "no visible button labelled " + text)
            button.text = newText
            return button
        }

        function test_buttonVisibility_data() {
            return [
                { tag: "default", hideSignup: false, hideSelfHost: false, step: AccountWizardController.ServerStep, signupVisible: true, selfHostVisible: true },
                { tag: "hide signup", hideSignup: true, hideSelfHost: false, step: AccountWizardController.ServerStep, signupVisible: false, selfHostVisible: true },
                { tag: "hide self host", hideSignup: false, hideSelfHost: true, step: AccountWizardController.ServerStep, signupVisible: true, selfHostVisible: false },
                { tag: "hide both", hideSignup: true, hideSelfHost: true, step: AccountWizardController.ServerStep, signupVisible: false, selfHostVisible: false },
                { tag: "other step default", hideSignup: false, hideSelfHost: false, step: AccountWizardController.BasicAuthStep, signupVisible: false, selfHostVisible: false },
                { tag: "other step hide signup", hideSignup: true, hideSelfHost: false, step: AccountWizardController.BasicAuthStep, signupVisible: false, selfHostVisible: false },
                { tag: "other step hide self host", hideSignup: false, hideSelfHost: true, step: AccountWizardController.BasicAuthStep, signupVisible: false, selfHostVisible: false },
                { tag: "other step hide both", hideSignup: true, hideSelfHost: true, step: AccountWizardController.BasicAuthStep, signupVisible: false, selfHostVisible: false }
            ]
        }

        function test_buttonVisibility(data) {
            Theme.wizardHideSignupButton = data.hideSignup
            Theme.wizardHideSelfHostButton = data.hideSelfHost
            const wizard = createWizard(data.step)
            compare(findVisibleButton(wizard.contentItem, "Sign up") !== null, data.signupVisible)
            compare(findVisibleButton(wizard.contentItem, "Self-host") !== null, data.selfHostVisible)
            if (data.step === AccountWizardController.ServerStep) {
                verify(findVisibleButton(wizard.contentItem, "Log in"))
            }
        }

        function test_widthIsConstantAcrossSteps() {
            const wizard = createWizard(AccountWizardController.ServerStep)
            const steps = [
                AccountWizardController.BrowserAuthStep,
                AccountWizardController.BasicAuthStep,
                AccountWizardController.SyncOptionsStep,
                AccountWizardController.ServerStep
            ]

            compare(wizard.minimumWidth, Style.accountWizardWidth)
            compare(wizard.width, Style.accountWizardWidth)
            for (const step of steps) {
                wizard.controller.currentStep = step
                compare(wizard.width, Style.accountWizardWidth, "width changed at step " + step)
                compare(wizard.minimumWidth, Style.accountWizardWidth)
            }
            compare(wizard.height, Style.compactDialogHeight)
        }

        function test_syncOptionsFooterFitsGermanLabels() {
            skip("NMC sync options use page-local actions instead of the upstream footer")
        }

        function test_chooseButtonGrowsWithLabel() {
            skip("NMC sync options use a custom fixed-width folder selection button")
        }

        function test_chooseButtonKeepsMinimumWidthForShortLabel() {
            skip("NMC sync options use a custom fixed-width folder selection button")
        }

        function test_overlongFooterLabelElidesInsideWindow() {
            skip("NMC sync options use page-local actions instead of the upstream footer")
        }
    }
}

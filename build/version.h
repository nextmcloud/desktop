/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef VERSION_H
#define VERSION_H

#define GIT_SHA1 "67f99efacb7b9b89d4c7acee50e01619d9f1aa9f"

#define MIRALL_STRINGIFY(s) MIRALL_TOSTRING(s)
#define MIRALL_TOSTRING(s) #s

/* MIRALL version */
#define MIRALL_VERSION_MAJOR 3
#define MIRALL_VERSION_MINOR 8
#define MIRALL_VERSION_PATCH 50
#define MIRALL_VERSION_BUILD 20230512

#define MIRALL_VERSION_SUFFIX daily-Win64

#define MIRALL_VERSION       3.8.50
#define MIRALL_VERSION_FULL  3.8.50.20230512

#define MIRALL_VERSION_STRING "3.8.50daily-Win64 (build 20230512)"

constexpr int NEXTCLOUD_SERVER_VERSION_MIN_SUPPORTED_MAJOR = 16;
constexpr int NEXTCLOUD_SERVER_VERSION_MIN_SUPPORTED_MINOR = 0;
constexpr int NEXTCLOUD_SERVER_VERSION_MIN_SUPPORTED_PATCH = 0;

constexpr int NEXTCLOUD_SERVER_VERSION_SECURE_FILEDROP_MIN_SUPPORTED_MAJOR = 26;
constexpr int NEXTCLOUD_SERVER_VERSION_SECURE_FILEDROP_MIN_SUPPORTED_MINOR = 0;
constexpr int NEXTCLOUD_SERVER_VERSION_SECURE_FILEDROP_MIN_SUPPORTED_PATCH = 0;

#endif // VERSION_H

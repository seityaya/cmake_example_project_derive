## Author                 : Seityagiya Terlekchi
## Contacts               : terlekchi.seityaya@gmail.com
## Creation Date          :
## License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
## SPDX-License-Identifier: LGPL-2.1-or-later
## Copyright © Seityagiya Terlekchi. All rights reserved.

cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(cmake_template_derive_libs)

include(YayaLibLink.cmake)

AddLib(
    cmake_template_core
    cmake_template_project
)

## Author                 : Seityagiya Terlekchi
## Contacts               : terlekchi.seityaya@gmail.com
## Creation Date          :
## License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
## SPDX-License-Identifier: LGPL-2.1-or-later
## Copyright © Seityagiya Terlekchi. All rights reserved.

cmake_minimum_required(VERSION 3.0)

project(cmake_template_derive_demo)

file(GLOB FILES *.c *.h)

add_executable(${PROJECT_NAME} ${FILES})

target_link_libraries(${PROJECT_NAME} PUBLIC cmake_template_derive_core)

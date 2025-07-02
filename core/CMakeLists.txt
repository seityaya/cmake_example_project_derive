## Author                 : Seityagiya Terlekchi
## Contacts               : terlekchi.seityaya@gmail.com
## Creation Date          :
## License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
## SPDX-License-Identifier: LGPL-2.1-or-later
## Copyright © Seityagiya Terlekchi. All rights reserved.

cmake_minimum_required(VERSION 3.0)

project(
    cmake_template_derive_core
    VERSION      0.1.0.0
    LANGUAGES    C
    HOMEPAGE_URL "https://github.com/seityaya/cmake_template_derive_core_project_git"
    DESCRIPTION  "cmake_template_derive_core_project_description"
)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic -Werror")

file(GLOB FILES *.c *.h)

add_library(${PROJECT_NAME} ${FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC cmake_template_core)

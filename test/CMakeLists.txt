## Author                 : Seityagiya Terlekchi
## Contacts               : terlekchiseityaya@gmail.com
## Creation Date          : 2024.10
## License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
## SPDX-License-Identifier: LGPL-2.1-or-later
## Copyright © 2024-2025 Seityagiya Terlekchi. All rights reserved.

cmake_minimum_required(VERSION 3.0)

project(my_calculator_test)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic -Werror")

file(GLOB FILES *.c *.h)

add_executable(${PROJECT_NAME} ${FILES})

target_link_libraries(${PROJECT_NAME} PUBLIC my_calc)

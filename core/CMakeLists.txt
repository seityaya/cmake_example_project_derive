#Author                 : Seityagiya Terlekchi
#Contacts               : terlekchiseityaya@gmail.com
#Creation Date          : 2024.10
#License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
#SPDX-License-Identifier: LGPL-2.1-or-later
#Copyright © 2024-2024 Seityagiya Terlekchi. All rights reserved.

cmake_minimum_required(VERSION 3.0)

project(my_calc)

set(CMAKE_C_STANDARD 11)

set(VERSION 0.1)

set(SRC_LIST
    my_calc.c
)

set(INC_LIST
    my_calc.h
)

add_library(${PROJECT_NAME} ${SRC_LIST} ${INC_LIST})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC my_math)

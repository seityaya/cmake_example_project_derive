cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(yaya_arithmetic_libs)

include(FetchContent)

if(NOT TARGET my_math)
    add_subdirectory(${CMAKE_SOURCE_DIR}/libs/cmake_example_project)
endif()

if(NOT TARGET my_math)
    FetchContent_Declare(cmake_example_project
      GIT_REPOSITORY "https://github.com/seityaya/cmake_example_project.git"
      GIT_SUBMODULES ""
      GIT_TAG "origin/master"
      SOURCE_DIR "${CMAKE_SOURCE_DIR}/libs/cmake_example_project"
    )
    FetchContent_MakeAvailable(cmake_example_project)
endif()

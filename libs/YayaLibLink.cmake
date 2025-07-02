include(FetchContent)

function(
    AddLib
    project_name_core
    project_name_folder
)

    if(NOT TARGET ${project_name_core})
        add_subdirectory(${CMAKE_SOURCE_DIR}/libs/${project_name_folder} ${CMAKE_BINARY_DIR}/${project_name_folder})
    endif()

    # if(NOT TARGET ${project_name_core})
    #     FetchContent_Declare(${project_name_folder}
    #       GIT_REPOSITORY "https://github.com/seityaya/${project_name_folder}.git"
    #       GIT_SUBMODULES ""
    #       GIT_TAG "origin/master"
    #       SOURCE_DIR "${CMAKE_SOURCE_DIR}/libs/${project_name_folder}"
    #     )
    #     FetchContent_MakeAvailable(${project_name_folder})
    # endif()

endfunction()

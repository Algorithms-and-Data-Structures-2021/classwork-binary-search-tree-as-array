if (NOT EXISTS "${PROJECT_SOURCE_DIR}/contrib/BSTree/CMakeLists.txt")
    message(FATAL_ERROR "submodule contrib/BSTree is missing.
     To fix try run: \n git submodule update --init --recursive")
else ()
    set(BUILD_MAIN OFF)  # do not build main executable
    add_subdirectory(${PROJECT_SOURCE_DIR}/contrib/BSTree ${CMAKE_CURRENT_BINARY_DIR}/BSTree)
endif ()
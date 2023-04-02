cmake_minimum_required(VERSION 3.20)

project(renderer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (WIN32)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -fsanitize=address )
    add_link_options(-fsanitize=address)
    set(CMAKE_CXX_FLAGS "-fuse-ld=lld")
endif()

find_package (OpenGL REQUIRED)

add_subdirectory(libs)
add_subdirectory(src)
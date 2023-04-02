add_subdirectory(fmt)
add_subdirectory(glfw)
SET(glew-cmake_BUILD_SHARED OFF CACHE BOOL "glew shared lib build off" FORCE)
SET(ONLY_LIBS ON CACHE BOOL "glew only libs" FORCE)

add_subdirectory(glew-cmake)
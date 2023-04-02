add_executable(renderer main.cpp)
target_link_libraries(renderer PRIVATE fmt)
target_include_directories(renderer PUBLIC fmt)

target_link_libraries(renderer PRIVATE glfw)
target_include_directories(renderer PUBLIC glfw)

target_link_libraries(renderer PRIVATE libglew_static)
target_include_directories(renderer PUBLIC libglew_static)

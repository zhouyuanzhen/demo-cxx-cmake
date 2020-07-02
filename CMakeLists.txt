#
cmake_minimum_required(VERSION 3.16)

#
project(cmake_cxx_demo)

#
set(CMAKE_CXX_STANDARD 11)
set(APP_NAME cmake_cxx_demo)
#
add_executable(${APP_NAME} src/main.cpp)


# Link library
include_directories(Inc ext/hello/include)
target_link_libraries(${APP_NAME} hello)

add_subdirectory(ext/hello)

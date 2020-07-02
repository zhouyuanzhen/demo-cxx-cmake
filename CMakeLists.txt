cmake_minimum_required(VERSION 3.16)
project(cmake_cxx_demo)

#
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS " -Wall -static -nostartfiles")
set(CMAKE_CXX_FLAGS "-Wall")

set(APP_NAME cmake_cxx_demo)
MESSAGE (STATUS "MSG: Set our application name to: " ${APP_NAME})

#
add_executable(${APP_NAME} src/main.cpp)


# Link library hello
include_directories(Inc ext/hello/include)
target_link_libraries(${APP_NAME} hello)

# Link library Demo
include_directories(Inc ext/Demo)
target_link_libraries(${APP_NAME} Demo)


MESSAGE (STATUS "MSG: Add sub directory: ext/hello")
add_subdirectory(ext/hello)

MESSAGE (STATUS "MSG: Add sub directory: ext/Demo")
add_subdirectory(ext/Demo)

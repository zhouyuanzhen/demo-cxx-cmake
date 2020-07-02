#
cmake_minimum_required(VERSION 3.16)

#
project(cmake_cxx_demo)

#
set(CMAKE_CXX_STANDARD 11)

#
add_executable(cmake_cxx_demo src/main.cpp)


# Link library
include_directories(Inc ext/hello/include)
target_link_libraries(cmake_cxx_demo hello)

add_subdirectory(ext/hello)

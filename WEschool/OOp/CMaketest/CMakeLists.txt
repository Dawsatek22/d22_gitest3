cmake_minimum_required(VERSION 3.12)
project(pro2)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE ON)
find_library( klasse1  klasse1.hpp )
add_library( klasse1  klasse1.hpp )
add_executable(Car_test Car_test.cpp)
link_libraries(Car_test STATIC klasse)
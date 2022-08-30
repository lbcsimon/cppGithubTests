cmake_minimum_required(VERSION 3.23)
project(SimpleTest)
include(CTest)
add_subdirectory(tests)
add_executable(SimpleHelloTest tests/SimpleHelloTest.cpp tests/SimpleHelloTest.h Hello.cpp Hello.h)
add_test(SimpleHello SimpleHelloTest)

set(CMAKE_CXX_STANDARD 14)
add_executable(SimpleTest main.cpp Hello.cpp Hello.h)

cmake_minimum_required(VERSION 3.23)
project(deque)

set(CMAKE_CXX_STANDARD 14)

add_executable(deque main.cpp deque.h node.h)
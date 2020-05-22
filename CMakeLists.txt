cmake_minimum_required(VERSION 3.16)
project(ftcp C)

set(CMAKE_C_STANDARD 99)

add_executable(ftcp main.c ftcp.h)
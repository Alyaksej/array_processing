cmake_minimum_required(VERSION 3.22.1)
project(array_processing C)

set(CMAKE_C_STANDARD 11)

add_library(array_processing STATIC library.c)

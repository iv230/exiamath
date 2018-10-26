cmake_minimum_required(VERSION 3.12)
project(exiamath C)

set(CMAKE_C_STANDARD 99)

add_library(exiamath SHARED source/library.c header/library.h)
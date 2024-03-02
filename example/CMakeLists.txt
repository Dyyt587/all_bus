cmake_minimum_required (VERSION 3.5)

project (abus)

aux_source_directory(../src/ DIR_SRCS)

include_directories(../src/)

add_executable(main main.c  ${DIR_SRCS})


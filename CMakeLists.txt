cmake_minimum_required(VERSION 3.6)
project(study_knk_c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O -Wall -W -pedantic -ansi -std=c99")

# Main
add_executable(main main.c)

add_executable(pun ch1/pun.c)
add_executable(dweight ch1/dweight.c)
add_executable(dweight2 ch1/dweight2.c)
add_executable(celsius ch1/celsius.c)

add_executable(ex1 ch1/ex/ex1.c)
add_executable(ex2 ch1/ex/ex2.c)
add_executable(ex3 ch1/ex/ex3.c)
add_executable(ex4 ch1/ex/ex4.c)
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

add_executable(printout ch2/printout.c)
add_executable(tprintf ch2/tprintf.c)
add_executable(scanin ch2/scanin.c)
add_executable(addfrac ch2/addfrac.c)
add_executable(endswithlf ch2/endswithlf.c)

add_executable(ch2ex1 ch2/ex/ch2ex1.c)
add_executable(ch2ex6 ch2/ex/ch2ex6.c)
add_executable(ch2proj5 ch2/proj/ch2proj5.c)
add_executable(upc ch4/upc.c)
add_executable(tassign ch4/tassign.c)
add_executable(tincdec ch4/tincdec.c)
add_executable(tpreced ch4/tpreced.c)
add_executable(subexpr ch4/subexpr.c)
add_executable(remainder ch4/remainder.c)
add_executable(ch4ex1 ch4/ex/ch4ex1.c)
add_executable(ch4proj1 ch4/proj/ch4proj1.cpp)
add_executable(broker ch5/broker.c)
add_executable(date ch5/date.c)
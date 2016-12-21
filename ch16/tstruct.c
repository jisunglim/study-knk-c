// Name : tstruct.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 21, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <string.h>

#define SHOW_RESULT(n)            \
  printf(                         \
    "| Part number : %6d | "      \
    "Part name : %-20s | "        \
    "Qunatity on hand : %4d |\n", \
    part##n.number,               \
    part##n.name,                 \
    part##n.on_hand               \
)
#define SHOW_POINTER(n)           \
  printf(                         \
    "| Part number : %p | "       \
    "Part name : %p | "           \
    "Qunatity on hand : %p |\n",  \
    &part##n.number,              \
    &part##n.name,                \
    &part##n.on_hand              \
)

#define NAME_LEN 20

int main(void)
{

  struct part /* Declaring a structure tag */ {
      int number;
      char name[NAME_LEN + 1];
      int on_hand;
  }
      part1 = {528, "Disk drive", 10},
      part2 = {.number = 914, .name = "Printer cable", .on_hand = 5},
      part3 = {331},
      part4 = {.number = 2447, .on_hand = 12, .name = "Solid state drive"};
      // The value in this initializer must appear in the same order as the members of the structure.


  struct part /* Use the tag to declare variables with compatible types. */
      part5 = {532, "DD", 10};

  SHOW_RESULT(1);
  SHOW_RESULT(2);
  SHOW_RESULT(3);
  SHOW_RESULT(4);

  SHOW_POINTER(1);
  SHOW_POINTER(2);
  SHOW_POINTER(3);
  SHOW_POINTER(4);



  return 0;
}
// Name : planet.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 19, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
  int i;
  char *planets[] = {"Mercury", "Venus"  , "Earth" ,
                     "Mars"   , "Jupiter", "Saturn",
                     "Uranus" , "Neptune", "Pluto" };
  char **p;

  for (p = &argv[1]; *p != NULL; p++) {
    for (i = 0; i < NUM_PLANETS; i++) {
      if (strcmp(*p, *(planets + i)) == 0) {
        printf("%s is planet %d\n", *p, i + 1);
        break;
      }
    }
    if (i >= NUM_PLANETS) {
      printf("%s is not a planet\n", *p);
    }
  }

  return 0;
}
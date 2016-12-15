// Name : svarinblock.c
// Purpose : static variable in block.
// Author : Jay J. Lim
// Date : Dec. 15, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
//  for (int i = 0; i < 10; i++) {
//    int j;
//    if (j == _NULL) { // Undefined
//      j = 0;
//    }
//
//    j++;
//    printf("%d ", j);
//  }
//
//  printf("\n");

  for (int i = 0; i < 10; i++) {
    static int j;
    if (j == _NULL) {
      j = 0;
    }

    j++;
    printf("%d ", j);
  }

  return 0;
}
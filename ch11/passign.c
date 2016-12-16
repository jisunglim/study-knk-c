// Name : passign.c
// Purpose : assign poiter variable.
// Author : Jay J. Lim
// Date : Dec. 16, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

int main(void)
{
  int i = 10;
  int j = 5;
  int *p = &i; /* The '*' (Asterisk) symbol here only helps specify the type of p
                * informing the compiler that p is a pointer to an int.*/

  p = &j;   /* '&' (address operator) is to find the address of object in memory.
             * The address of j is copied into p.
             * "*p = &j;" is wrong!!! */

  /* Assigning a value to *p is particularly dangerous. If p happens to contain a valid memory address,
   * the following assignment will attempt to modify the data stored at that address. */

  /* Once a pointer variable points to an object, we can use the * (indirection) operator to access
   * what's stored in the object. */

  printf("%d\n", *p); /* '*' (indirection operator) symbol here is to gain access to the object
                       * that a pointer points to. */
  printf("%d\n", j);

  j = *&*&i; /* you may wish to think '*' operator as the inverse of &. */

  printf("%d\n", *p);
  printf("%d\n", j);


  return 0;
}
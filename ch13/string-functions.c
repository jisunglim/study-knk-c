// Name : string.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, j, k;
  char str[] = "This is for test.";
  char str1[20];
  // char str1_short[7];
  char str2[20];
  // char str2_short[7];
  char str3[20];
  char str3_short[7];

  char str_cat[50] = "";
  char str1_cat[] = "Hello, ";
  char str2_cat[] = "World! ";
  char str3_cat[] = "My ";
  char str4_cat[] = "name is Jisung!";
  printf("\n");

  printf("%s : %d\n", str, (int) strlen(str));
  printf("=============\n");

  // 1 - Unsafe
  strcpy(str1, str);
  printf("Enough : %s : %d\n", str1, (int) strlen(str1));

  // strcpy(str1_short, str);
  // printf("Short  : %s : %d\n", str1_short, (int) strlen(str1_short));

  // 2 - Safe
  strncpy(str2, str, sizeof(str2));
  printf("Enough : %s : %d\n", str2, (int) strlen(str2));

  // strncpy(str2_short, str, sizeof(str2_short));
  // printf("Short  : %s : %d\n", str2_short, (int) strlen(str2_short));

  // 3 - Safest
  strncpy(str3, str, sizeof(str3) - sizeof(char));
  str3[sizeof(str3) - sizeof(char)] = '\0';
  printf("Enough : %s : %d\n", str3, (int) strlen(str3));

  strncpy(str3_short, str, sizeof(str3_short) - sizeof(char));
  str3[sizeof(str3_short) - sizeof(char)] = '\0';
  printf("Short  : %s : %d\n", str3_short, (int) strlen(str3_short));

  printf("\n");

  strcat(str_cat, strcat(str1_cat, str2_cat));
  printf("%s : %d[%d]\n", str_cat, (int) sizeof(str_cat), (int) strlen(str_cat));

  strncat(str_cat, str3_cat, sizeof(str_cat) - strlen(str_cat) - sizeof(char));
  str_cat[sizeof(str_cat) - sizeof(char)] = '\0';
  printf("%s : %d[%d]\n", str_cat, (int) sizeof(str_cat), (int) strlen(str_cat));

  strncat(str_cat, str4_cat, sizeof(str_cat) - strlen(str_cat) - sizeof(char));
  str_cat[sizeof(str_cat) - sizeof(char)] = '\0';
  printf("%s : %d[%d]\n", str_cat, (int) sizeof(str_cat), (int) strlen(str_cat));

  printf("\n");
  i = strcmp(str1_cat, str2_cat);
  if (i > 0)
    printf("%s(%d) > %s(%d)\n", str1_cat, (int) strlen(str1_cat), str2_cat, (int) strlen(str2_cat));
  else if (i == 0)
    printf("%s(%d) = %s(%d)\n", str1_cat, (int) strlen(str1_cat), str2_cat, (int) strlen(str2_cat));
  else
    printf("%s(%d) < %s(%d)\n", str1_cat, (int) strlen(str1_cat), str2_cat, (int) strlen(str2_cat));

  printf("strcmp is not for comparing length, it compares two strings based on lexicographic order.");

  return 0;
}
// Name : typedefstruct.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>


typedef struct
{
    int age;
    char name[30];
    int height;
    int grade; /* A = 1, B = 2, C = 3, D = 4, F = 5 */
} Student;

int main(void)
{
  Student s1 = {.age=22, .name="Jisung", .height=170, .grade=1};
  Student s2 = {.age=23, .name="Jay", .height=170, .grade=1};

  printf("age : %d, name : %s, height : %d, grade :%d\n", s1.age, s1.name, s1.height, s1.grade);

}

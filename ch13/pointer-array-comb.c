// Name : pointer.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 19, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

int main(void)
{
  // Step 1. identifier is

  // Step 2. find right side
  // () : function returning ...
  // [] : array of ...

  // Step 3. find left side
  // *  : pointer toch

  char a[] = "String";
  char b[] = "String";
  char (*p)[] = &a;

  char *r = a;
  char *s = b;
  char *(*q)[] = &{r, s};
  // &{(&char)}

  char ca = 'a';
  char cb = 'b';

  char *(u[]) = {a, b, &ca};
  char *uu[] = {&ca, &cb};

  char *(*(*v))[] = &{&{&ca, &cb}};
  //  &{ &{ &char, ... } }
  // v is pointer to pointer to array of pointer to char

  char *pa = &ca;
  char *pb = &cb;

  char *(*ppa) = &pa;
  // ppa is pointer to pinter to char;

  char *(*ppb) = &pb;

  char *(*(*vv)[2]);
  (*vv)[0] = ppa;
  (*vv)[1] = ppb;
  // vv is pointer to array of pointer to pointer to char


  return 0;
}
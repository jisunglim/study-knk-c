#include <stdio.h>
#include "add.h"
#include "static-header-test.h"
// #include "static-header-test.h"

// intenral linkage : functions in other files don't have access
// -> information hiding
static int in_link = 0;

void f1(void);
void f2(void);
int static_recursion(void);
int *get_feasible_sol(void);

int main(void)
{
  int i;
  f1();
  for (i = 0; i < 15; i++) {
    // The static variable in a block initialized only once.
    static int no_link = 0;
    no_link++;
    printf("no_link %d\n", no_link);
  }
  f2();
  static_recursion();

  int a[6];
  int *p = a;
  p = get_feasible_sol();

  for (i = 0; i < 6; i++) {
    printf("%d ", *(p+i));
  }
  printf("\n");

  extern_func();

  static_header_func();

  return 0;
}

void f1(void)
{
  int i;
  for (i = 0; i < 5; i++) {
    in_link++;
    printf("in_link %d\n", in_link);
  }
}

void f2(void)
{
  int i;
  for (i=0; i<15; i++) {
    in_link++;
    printf("in_link %d\n", in_link);
  }
}

int static_recursion(void)
{
  // Also shared by all calls of the recursion function.
  static int recursion = 12;
  printf("recursion %d\n", recursion);
  if (recursion <= 0) {
    return recursion;
  } else {
    recursion--;
    return static_recursion();
  }
}

int *get_feasible_sol(void)
{
  static int a[] = {1, 1, 2, 3, 5, 8};
  return a;
}

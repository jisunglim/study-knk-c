#include <stdio.h>

void test_linkage(void);

static int internal_link_test = 0;

int main(void)
{
  test_linkage();
  printf("internal_link_test %d\n", internal_link_test);
}

void test_linkage(void)
{
  // The keyword 'external' is ignored, since the earlier declaration is static.
  extern int internal_link_test;
  internal_link_test += 22;
}

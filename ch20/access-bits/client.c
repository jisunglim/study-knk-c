#include <stdio.h>
#include "access-bits.h"

int main(void)
{
  Bits b = create_bits();

  set_all_bits(b);
  printf("set_all_bits(b) : %d\n", *b);

  clear_all_bits(b);
  printf("clear_all_bits(b) : %d\n", *b);

  set_bits(b, 3);
  printf("set_bits(b, 3) : %d\n", *b);

  printf("test_bits(b, 3) : %s\n", test_bits(b,3) ? "true" : "false");
  printf("test_bits(b, 6) : %s\n", test_bits(b,6) ? "true" : "false");

  clear_bits(b, 3);
  printf("clear_bits(b, 3) : %d\n", *b);

  destroy_bits(b);
}

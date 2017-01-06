#include <stdio.h>
#include "access-bits.h"

int main(void)
{
  Bits b = create_bits();
  Bits n;

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

  set_bit_field(b, 0x0032);
  printf("set_bit_field(b, 0x0032) : %d\n", *b);

  n = get_bit_field(b, 0x00F0);
  printf("get_bit_field(b, 0x00F0) : %d\n", *n);

  n = get_bit_field(b, 0x000F);
  printf("get_bit_field(b, 0x00F0) : %d\n", *n);

  set_bit_field(b, 0x00F0);
  printf("set_bit_field(b, 0x00F0) : %d\n", *b);

  destroy_bits(b);
}

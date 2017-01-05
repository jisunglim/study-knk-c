#include <stdio.h>
#include <limits.h>


int main(void)
{
  unsigned short i, j, k; // 0 ~ 65535(2^16)

  printf("Unsigned int max : %d\n", USHRT_MAX);

  i = 13;
  j = i << 2;
  printf("i = 13, j = i << 2 = %d\n", j);
  j = i >> 2;
  printf("i = 13, j = i >> 2 = %d\n", j);

  i <<= 2;
  printf("i <<= 2 = %d\n", i);
  i >>= 2;
  printf("i >>= 2 = %d\n", i);

  i = 1;
  for (int i = 0; i < 8; i++)
    i = (i << 2) + 1;

  j = ~i;

  k = i|j;
  printf("full bits : %d\n", k);
  k = i^j;
  printf("full bits : %d\n", k);
}

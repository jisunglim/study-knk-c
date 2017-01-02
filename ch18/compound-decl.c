#include <stdio.h>

typedef int *Fcn(void);  // Fcn is function with no params returning int.
typedef Fcn *Fcn_ptr;    // Fcn_ptr is pointer to Fcn.
typedef Fcn_ptr Fcn_ptr_array[2]; // Fcn_ptr_array is array of Fcn_ptr.

int *return_zero(void);
int *return_one(void);

int main(void)
{
  Fcn *zero = &return_zero;
  Fcn *one = &return_one;

  Fcn_ptr p_zero = zero;
  Fcn_ptr p_one = one;

  Fcn_ptr_array arr_fp = {p_zero, p_one};

  printf("zero : %d, one : %d\n", *(*arr_fp[0])(), *(*arr_fp[1])());
}

int *return_zero(void)
{
  static int zero = 0;
  return &zero;
}

int *return_one(void)
{
  static int one = 1;
  return &one;
}

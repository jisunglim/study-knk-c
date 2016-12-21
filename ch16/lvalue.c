// Name : lvalue.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

int main(void)
{
  struct {
      char hello[8];
      char world[7];
      char concat[14];
  } test = {"Hello, ", "world!", ""};

  strcat(test.concat, test.hello);
  strcat(test.concat, test.world);
  printf("%s\n", test.concat);

  return 0;
}
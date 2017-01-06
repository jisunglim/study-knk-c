#include <stdio.h>

struct file_date {
  unsigned int day : 5;    // 0 to 31
  unsigned int month : 4;  // 0 to 16
  unsigned int year : 7;   // 0 to 127
};

struct file_time {
  unsigned int seconds : 5; // 0 to 31 [real_seconds / 2]
  unsigned int minutes : 6; // 0 to 63
  unsigned int hours : 5;   // 0 to 31
};

union int_date {
  unsigned short i;
  struct file_date fd;
};

unsigned short convert_int(struct file_date);
void print_date(unsigned short);

int main(void) {
  struct file_date fd;
  unsigned short i;

  fd.day = 11;
  fd.month = 12;
  fd.year = 18;

  i = convert_int(fd);
  printf("Meaningless value : %d\n", i);

  print_date(i);

}

unsigned short convert_int(struct file_date fd)
{
  union int_date u;

  u.fd = fd;

  return u.i;
}

void print_date(unsigned short n)
{
  union int_date u;

  u.i = n;
  printf("%d %d %d\n", u.fd.month, u.fd.day, u.fd.year + 1980);
}

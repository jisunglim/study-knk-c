#include <stdio.h>

struct file_date {
  unsigned int day   : 5; // 0 to 31
  unsigned int month : 4; // 0 to 15
  unsigned int year  : 7; // 0 to 127
};

struct file_time {
  unsigned int seconds : 5; // 0 to 31 [real_seconds / 2]
  unsigned int minutes : 6; // 0 to 63
  unsigned int hours   : 5; // 0 to 31
};

union int_date_time {
  unsigned short i;
  struct file_date fd;
  struct file_time ft;
};

unsigned short convert_date_to_int(struct file_date fd);
unsigned short convert_time_to_int(struct file_time ft);
void print_date(unsigned short);
void print_time(unsigned short);

int main(void) {
  struct file_date fd;
  struct file_time ft;
  unsigned short i, j;

  fd.day = 11;
  fd.month = 12;
  fd.year = 18; // +1980

  i = convert_date_to_int(fd);

  ft.hours = 22;
  ft.minutes = 38;
  ft.seconds = 15;

  j = convert_time_to_int(ft);

  print_date(i);
  print_time(j);
}

unsigned short convert_date_to_int(struct file_date fd)
{
  union int_date_time u;
  u.fd = fd;

  return u.i;
}

unsigned short convert_time_to_int(struct file_time ft)
{
  union int_date_time u;
  u.ft = ft;

  return u.i;
}

void print_date(unsigned short int_date)
{
  union int_date_time u;
  u.i = int_date;
  printf("%d/%d/%d\n", u.fd.month, u.fd.day, u.fd.year + 1980);
}

void print_time(unsigned short int_time)
{
  union int_date_time u;
  u.i = int_time;
  printf("%02d:%02d:%02d\n", u.ft.hours, u.ft.minutes, u.ft.seconds * 2);
}

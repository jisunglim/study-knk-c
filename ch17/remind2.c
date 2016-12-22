// Name : remind.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 18, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int read_line2(char *str, int n);

int main(void)
{
  char *reminders[MAX_REMIND];
  char day_str[2 + 1], msg_str[MSG_LEN + 1];
  int day;
  int i, j;
  int num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left -- \n");
      break;
    }

    printf("Enter day and reminder : ");
    scanf("%2d", &day);
    if (day == 0)
      break;

    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      reminders[j] = reminders[j-1];

    reminders[i] = malloc(2 + strlen(msg_str) + 1);
    if (reminders[i] == NULL) {
      printf("-- No space left ==\n");
      break;
    }

    strcpy(reminders[j], day_str);
    strcat(reminders[j], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf("%s\n", reminders[i]);
  }

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}

int read_line2(char *str, int n)
{
  int i = 0;

  while ((*str = getchar()) != '\n') {
    if (i < n) {
      str++;
    } else {
      *str = '\0';
      break;
    }
  }
  return i;
}
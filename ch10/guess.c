// Name : guess.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 15, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* Externals */
int secret_number;

/* Prototypes */
void init_number_generator(void);

void new_secret_number(void);

void read_guesses(void);

int main(void)
{
  char cmd;

  printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
  init_number_generator();

  do {
    new_secret_number();
    printf("A new number has been chosen\n");

    read_guesses();

    printf("Play again? [Y/N] ");
    scanf(" %c", &cmd);
    printf("\n");
  } while (cmd == 'y' || cmd == 'Y');

  return 0;
}

void init_number_generator(void)
{
  srand((unsigned) time(NULL));
}

void new_secret_number(void)
{
  secret_number = rand() % MAX_NUMBER + 1;
}

void read_guesses(void)
{
  int guess, num_guesses = 0;

  for (;;) {
    num_guesses++;
    printf("Enter guess : ");
    scanf("%d", &guess);

    if (guess == secret_number) {
      printf("You won in %d guesses!\n", num_guesses);
      return;
    } else if (guess < secret_number) {
      printf("Too low; try again.\n");
    } else {
      printf("Too high; try again.\n");
    }
  }

}

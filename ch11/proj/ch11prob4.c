// Name : ch11prob4.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 17, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5




void read_cards(const int n_rank, const int n_suit, const int n_card,
                int a_rank[n_rank], int a_suit[n_suit]);

void init_cards(const int n_rank, const int n_suit, int a_rank[n_rank], int a_suit[n_suit],
                bool card_exists[n_rank][n_suit]);

int get_rank(char ch);

int get_suit(char ch);

void analyze_hand(int n_rank, int n_suit, const int a_rank[n_rank], const int a_suit[n_suit],
                  bool *straight, bool *flush, bool *four, bool *three, int *pairs);

void print_result(bool straight, bool flush, bool four, bool three, int pairs);

int main(void)
{
  int num_in_rank[NUM_RANKS];
  int num_in_suit[NUM_SUITS];
  bool straight, flush, four, three;
  int pair;
  char ch;

  for (;;) {
    read_cards(NUM_RANKS, NUM_SUITS, NUM_CARDS, num_in_rank, num_in_suit);
    analyze_hand(NUM_RANKS, NUM_SUITS, num_in_rank, num_in_suit,
                 &straight, &flush, &four, &three, &pair);
    print_result(straight, flush, four, three, pair);

    printf("Again? [Y/N] ");
    scanf("%c", &ch);

    switch (ch) {
      case 'n' : case 'N' :
        exit(EXIT_SUCCESS);
        break;
      default:
        break;
    }

    while ((ch = (char) getchar()) != '\n')
      ;
  }
}

void read_cards(const int n_rank, const int n_suit, const int n_card,
                int a_rank[n_rank], int a_suit[n_suit])
{
  bool card_exists[n_rank][n_suit];
  char ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  init_cards(n_rank, n_suit, a_rank, a_suit, card_exists);

  while (cards_read < n_card) {
    bad_card = false;

    printf("Enter a card : ");

    if ((rank = get_rank((char) getchar())) == -1)
      bad_card = true;

    if ((suit = get_suit((char) getchar())) == -1)
      bad_card = true;

    while ((ch = (char) getchar()) != '\n')
      if (ch != ' ')
        bad_card = true;

    if      (bad_card)                printf("Bad card; ignored.\n");
    else if (card_exists[rank][suit]) printf("Duplicate card; ignored.\n");
    else {
      a_rank[rank]++;
      a_suit[suit]++;
      card_exists[rank][suit] = true;
      cards_read++;
    }
  }
}

void init_cards(const int n_rank, const int n_suit, int a_rank[n_rank], int a_suit[n_suit],
                bool card_exists[n_rank][n_suit])
{
  int rank, suit;

  for (rank = 0; rank < n_rank; rank++) {
    a_rank[rank] = 0;
    for (suit = 0; suit < n_suit; suit++) {
      card_exists[rank][suit] = false;
    }
  }

  for (suit = 0; suit < n_suit; suit++) {
    a_suit[suit] = 0;
  }

}

int get_rank(char ch)
{
  switch (ch) {
    case '2' :            return 0; 
    case '3' :            return 1; 
    case '4' :            return 2; 
    case '5' :            return 3; 
    case '6' :            return 4; 
    case '7' :            return 5; 
    case '8' :            return 6; 
    case '9' :            return 7; 
    case 't' : case 'T' : return 8; 
    case 'j' : case 'J' : return 9; 
    case 'q' : case 'Q' : return 10; 
    case 'k' : case 'K' : return 11; 
    case 'a' : case 'A' : return 12; 
    default  :            return -1;
  }
}

int get_suit(char ch)
{
  switch (ch) {
    case 'c' : case 'C' : return 0; 
    case 'd' : case 'D' : return 1; 
    case 'h' : case 'H' : return 2; 
    case 's' : case 'S' : return 3; 
    default :             return -1;
  }
}


void analyze_hand(int n_rank, int n_suit, const int a_rank[n_rank], const int a_suit[n_suit],
                  bool *straight, bool *flush, bool *four, bool *three, int *pairs)
{
  int num_consec = 0;
  int rank, suit;

  *straight = false;
  *flush = false;
  *four = false;
  *three = false;
  *pairs = 0;

  /* check for flush */
  for (suit = 0; suit < NUM_SUITS; suit++) {
    if (a_suit[suit] == NUM_CARDS) {
      *flush = true;
    }
  }

  /* check for straight */
  rank = 0;
  while (a_rank[rank] == 0) {
    rank ++;
  }
  for (; rank < NUM_RANKS && a_rank[rank] > 0; rank++) {
    num_consec++;
  }
  if (num_consec == NUM_CARDS) {
    *straight = true;
    return;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (rank = 0; rank < NUM_RANKS; rank++) {
    if (a_rank[rank] == 4) {
      *four = true;
    }
    if (a_rank[rank] == 3) {
      *three = true;
    }
    if (a_rank[rank] == 2) {
      (*pairs)++;
    }
  }
}

void print_result(bool straight, bool flush, bool four, bool three, int pairs)
{
  if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}
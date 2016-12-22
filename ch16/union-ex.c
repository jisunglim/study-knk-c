// Name : union.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 22, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>

#define TITLE_LEN  40
#define AUTHOR_LEN 30
#define DESIGN_LEN 50

#define ITEM_BOOKS  1
#define ITEM_MUGS   2
#define ITEM_SHIRTS 3

#define COLOR_BLUE  1
#define COLOR_RED   2
#define COLOR_GREEN 3

#define ITEM(n) (n == 1) ? "book" : ((n == 2) ? "mug" : ((n == 3) ? "shirt" : "unknown"))

#define COLOR(n) (n == 1) ? "blue" : ((n == 2) ? "red" : ((n == 3) ? "green" : "unknown"))


struct catalog_item_redundant
{
    int stock_number;
    double price;
    int item_type;

    char title[TITLE_LEN + 1];
    char author[AUTHOR_LEN + 1];
    int num_pages;
    char design[DESIGN_LEN + 1];
    int colors;
    int sizes;
};

struct catalog_item
{
    int stock_number;
    double price;
    int item_type;
    union
    {
        struct
        {
            char title[TITLE_LEN + 1];
            char author[AUTHOR_LEN + 1];
            int num_pages;
        } book;
        struct
        {
            char design[DESIGN_LEN + 1];
        } mug;
        struct
        {
            char design[DESIGN_LEN + 1];
            int colors;
            int sizes;
        } shirt;
    } item;
};

int main(void)
{

  struct catalog_item book1 = {32, 39.5, ITEM_BOOKS, {
      .book = {"C programming : A modern approach", "K. N. King", 832}
  }};

  struct catalog_item mug1 = {32, 39.5, ITEM_MUGS, {
      .mug = {"Blue, coral"}
  }};

  struct catalog_item shirt1 = {32, 39.5, ITEM_SHIRTS, {
      .shirt = {"mountain printed on front", COLOR_RED, 105}
  }};

  printf("BOOK  (book1)  :: [ #stock : %2d, price : $%4.2lf, category : %-7s] :: title : %s, author : %s, # of pages : %d\n",
         book1.stock_number, book1.price, ITEM(book1.item_type),
         book1.item.book.title, book1.item.book.author, book1.item.book.num_pages);

  printf("MUG   (mug1)   :: [ #stock : %2d, price : $%4.2lf, category : %-7s] :: design : %s\n",
         mug1.stock_number, mug1.price, ITEM(mug1.item_type),
         mug1.item.mug.design);

  printf("SHIRT (shirt1) :: [ #stock : %2d, price : $%4.2lf, category : %-7s] :: design : %s, color : %s, size : %d\n",
         shirt1.stock_number, shirt1.price, ITEM(shirt1.item_type),
         shirt1.item.shirt.design, COLOR(shirt1.item.shirt.colors), shirt1.item.shirt.sizes);

  return 0;
}
// Name : quicksort.c
// Purpose : Purpose here.
// Author : Jay J. Lim
// Date : Dec. 14, 2016
//
// Copyright (c) 2016 Jay J. Lim. All right reserved.

#include <stdio.h>
#include <stdbool.h>

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
  int size, i;

  printf("Enter the number of element in array to be sorted : ");
  scanf("%d", &size);

  int a[size];
  printf("Enter %d numbers to be sorted : ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  quicksort(a, 0, size - 1);

  printf("In sorted order : ");
  for (i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

void quicksort(int a[], int low, int high)
{
  if (low >= high) {
    return;
  }
  int partition = split(a, low, high);
  quicksort(a, low, partition - 1);
  quicksort(a, partition + 1, high);

}

int split(int a[], int low, int high)
{
  int partition = a[low];

  for (;;)
  {
    while (low < high && partition <= a[high]) {
      high--;
    }
    if (low >= high) {
      break;
    }
    a[low++] = a[high];

    while (low < high && a[low] <= partition) {
      low++;
    }
    if (low >= high) {
      break;
    }
    a[high--] = a[low];
  }
  a[high] = partition;
  return high;
}

int split2(int a[], int low, int high)
{
  int partition = a[low];

  bool increase = false;

  while (low != high) {
    if (increase) {
      if (a[low] > partition) {
        a[high] = a[low];
        increase = false;
      }
      low++;
    } else {
      if (a[high] < partition) {
        a[low] = a[high];
        increase = true;
      }
      high--;
    }
  }
  a[high] = partition;
  return high;
}
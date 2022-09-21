#include <stdlib.h>
#include <stdio.h>
#include "SortsPack.h"

#define _SIZE 6

void PrintArray(int *arr, const int size);



int main()
{
  int array[_SIZE] = {4, 6, 3, 5, 9, 2};
  PrintArray(array, _SIZE);

  InsertionSortV2(array, _SIZE);
  PrintArray(array, _SIZE);
  
  return 0;
}



void PrintArray(int *arr, const int size)
{
  printf("Array values:\n");

  for(int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}
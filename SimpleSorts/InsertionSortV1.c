#include "InsertionSortV1.h"
#include "Swap.h"


void InsertionSortV1(int *arr, const int size)
{
  int min_index = 0;

  for(int i = 1; i < size; i++)
    if(arr[i] < arr[min_index])
      min_index = i;

  Swap(&arr[0], &arr[min_index]);

  for(int i = 1; i < size; i++)
    for(int j = i; arr[j] < arr[j - 1]; j--)
      Swap(&arr[j], &arr[j - 1]);
}
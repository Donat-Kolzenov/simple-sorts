#include "InsertionSort.h"
#include "Swap.h"


void InsertionSort(int *arr, const int size)
{
  for(int i = 1; i < size; i++)
    for(int j = i; j > 0; j--)
      if(arr[j] < arr[j - 1])
        Swap(&arr[j], &arr[j - 1]);
}
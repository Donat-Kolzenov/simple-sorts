#include "BubbleSortV1.h"
#include "Swap.h"


void BubbleSortV1(int *arr, const int size)
{
  for(int i = 0; i < size - 1; i++)
    for(int j = 0; j < size - 1 - i; j++)
      if(arr[j] > arr[j + 1])
        Swap(&arr[j], &arr[j + 1]);
}
#include "SelectionSort.h"
#include "Swap.h"


void SelectionSort(int *arr, const int size)
{
  for(int i = 0; i < size - 1; i++)
  {
    int min_index = i;
    for(int j = i + 1; j < size; j++)
    {
      if(arr[j] < arr[min_index])
        min_index = j;
    }
    Swap(&arr[i], &arr[min_index]);
  }
}
#include "CocktailSort.h"
#include "Swap.h"


void CocktailSort(int *arr, const int size)
{
  int left = 0, right = size - 1;
  int flag = 1;

  while ((left < right) && flag > 0)
  {
    flag = 0;
    for (int i = left; i < right; i++)
      if (arr[i] > arr[i + 1])
      {
        Swap(&arr[i], &arr[i + 1]);
        flag = 1;
      }  
    right--;

    for (int i = right; i > left; i--)
      if (arr[i - 1] > arr[i])
      {
        Swap(&arr[i], &arr[i - 1]);
        flag = 1;
      }    
    left++;
  }
}
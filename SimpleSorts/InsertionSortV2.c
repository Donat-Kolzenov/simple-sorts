#include <stdlib.h>
#include "InsertionSortV2.h"
#include "Swap.h"


void InsertionSortV2(int *arr, const int size)
{
  int *aux = (int*)malloc(sizeof(int) * (size + 1));
  for(int i = 1; i < size + 1; i++)
    aux[i] = arr[i - 1];

  for(int i = 2; i < size + 1; i++)
  {
    aux[0] = aux[i];

    for(int j = i; aux[j] < aux[j - 1]; j--)
      Swap(&aux[j], &aux[j - 1]);
  }

  for(int i = 0; i < size + 1; i++)
    arr[i] = aux[i + 1];

  free(aux);
}
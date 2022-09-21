#include "Swap.h"


void Swap(int *first, int *second)
{
  int tmp = *first;
  *first = *second;
  *second = tmp;
}
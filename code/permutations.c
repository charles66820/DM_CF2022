#include "permutations.h"

void initPerm(int *P, unsigned int n) {
  int i = 0;
  while (i < n)
  {
    P[i] = i;
    i++;
  }

  return;
}

bool isMaxPerm(int *P, unsigned int n) {
  int i = n - 1;
  while (i >= 0)
  {
    if (P[i] == i)
      return false;
    i--;
  }

  return true;
}
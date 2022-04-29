#include "reverse.h"

void reverse(int *t, unsigned int i, unsigned int j, unsigned int n)
{
    /*@
      loop invariant i < j + 1;
      loop invariant 0 <= i <= n;
      loop invariant n >= j >= 0;
      loop invariant t[i] == \at(t[j], Pre);
      loop invariant t[j] == \at(t[i], Pre);
      // loop invariant \forall integer k; 0 <= i <= k <= j <= n ==> \valid(t + k);
      loop assigns i, j, t;
    */
    while (i < j)
    {
        int aux = t[i];
        t[i] = t[j];
        t[j] = aux;
        i++;
        j--;
    }
}
#include "reverse.h"

void reverse(int *t, unsigned int i, unsigned int j, unsigned int n)
{
    /*@
      loop invariant i <= j+1;
      loop invariant i+j == (\at(i,Pre)) + (\at(j,Pre));
      loop invariant i >= \at(i,Pre);
      loop invariant j <= \at(j,Pre);
      loop invariant \forall integer k; (\at(i,Pre)) <= k < i ==> t[k] == \at(t[(\at(j,Pre))-k+(\at(i,Pre))],Pre);
      loop invariant \forall integer k; j < k <= (\at(j,Pre)) ==> t[k] == \at(t[(\at(j,Pre))-k+(\at(i,Pre))],Pre);
      loop invariant \forall integer k; i <= k <= j ==> t[k] == \at(t[k],Pre);
      loop assigns i, j, t[\at(i,Pre) .. \at(j,Pre)];
      loop variant j;
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
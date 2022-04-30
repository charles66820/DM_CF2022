#include "permutations.h"

void initPerm(int *P, unsigned int n) {
  int i = 0;
  /*@
    loop invariant 0 <= i <= n;
    //loop invariant \forall integer k; 0 <= k < i ==> P[k] < P[k+1];
    loop invariant unchangedTab{Pre,Here}(P,P,i,n);
    loop invariant isPermutation(P,i);
    loop invariant isMinPerm(P,i);
    loop assigns i, P[0 .. n-1];
    loop variant n-i;
  */
  while (i < n)
  {
    P[i] = i;
    i++;
  }

  return;
}

bool isMaxPerm(int *P, unsigned int n) {
  bool res = true;

  int i = n - 1;
  /*@
    loop invariant -1 <= i < n;
    //loop invariant \forall integer k; 0 <= k < i ==> P[k] < P[k+1];
    loop invariant unchangedTab{Pre,Here}(P,P,0,n);
    loop invariant isPermutation(P,n);
    loop invariant isMaxPerm(P,i) ==> res == 1 || !isMaxPerm(P,i) ==> res == 0;
    loop assigns i, res;
    loop variant i;
  */
  while (i >= 0)
  {
    if (P[n-1-i] == i) {
      res = false;
      break;
    }
    i--;
  }

  return res;
}
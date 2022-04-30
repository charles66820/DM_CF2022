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

  int i = 0;
  /*@
    loop invariant 0 <= i <= n;
    loop invariant unchangedTab{Pre,Here}(P,P,0,n);
    loop invariant isMaxPerm(P,i) ==> res == 1 || !isMaxPerm(P,i) ==> res == 0;
    loop assigns i, res;
    loop variant n-i;
  */
  while (i < n)
  {
    if (P[i] == n-1-i) {
      res = false;
      break;
    }
    i++;
  }

  return res;
}
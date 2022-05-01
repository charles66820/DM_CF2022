#include "permutations.h"

void initPerm(int *P, unsigned int n) {
  int i = 0;
  /*@
    loop invariant 0 <= i <= n;
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
    loop invariant \forall integer k; 0<=k<i ==> P[k]==n-1-k ==> res==1;
    loop invariant \forall integer k; 0<=k<i ==> P[k]!=n-1-k ==> res==0;
    loop invariant \forall integer j; i<=j<n ==> res==1;
    loop assigns i, res;
    loop variant n-i;
  */
  while (i < n)
  {
    if (P[i] != n-1-i) {
      res = false;
      break;
    }
    i++;
  }

  return res;
}
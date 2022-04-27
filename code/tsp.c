#include "tsp.h"

int tsp(unsigned int n, int *P)
{
    initPerm(P, n);
    int val = value(P, n);
    //@ assert \forall int* t; \separated(t+(0..n-1),P+(0..n-1)) ==>  isPermutation(t,n) ==> isBiggerPerm{Here,Here}(t,P,n) ==> unchangedTab{Here,Here}(t,P,0,n);
    while (!(isMaxPerm(P, n)))
    {
    L:
        NextPermutation(P, n);
        //@ assert \forall int* t; \separated(t+(0..n-1),P+(0..n-1)) ==> unchangedTab{L,Here}(t,t,0,n);
        //@ assert \forall int* t; \separated(t+(0..n-1),P+(0..n-1)) ==> isBiggerPerm{Here,L}(t,P,n) ==> isBiggerPerm{L,L}(t,P,n);
        //@ assert \forall int* t; \separated(t+(0..n-1),P+(0..n-1)) ==> isPermutation(t,n) ==> isBiggerPerm{Here,L}(t,P,n) ==> value(t,n) >= val;
        if (val > value(P, n))
            val = value(P, n);
    }
    return val;
}
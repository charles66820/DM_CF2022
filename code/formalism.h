#include "stdbool.h"

#ifndef __FORMALISM__
#define __FORMALISM__

// Exercice 3:

/*@ predicate isPermutation(int* v, integer n) = \forall integer i; 0 <= i < n ==> 0 <= v[i] < n && \forall integer i,j; 0 <= i < j < n ==> v[i] != v[j];
 */

/*@  predicate unchangedTab{L,M}(int *tab, int *tab2, integer i, integer n) = \forall integer j; i <= j < n ==> \at(tab[j],L) == \at(tab2[j],M);
 */

/*@ predicate isStrictlyBiggerPerm{L,M}(int *t, int *s, integer n) = (\exists integer m; 0 <= m <= n-1 && (\at(t[m],L) < \at(s[m],M) && unchangedTab{L,M}(t,s,0,m)));
 */

/*@ predicate isBiggerPerm{L,M}(int* t,int* s, integer n) = isStrictlyBiggerPerm{L,M}(t,s,n) || (unchangedTab{L,M}(t,s,0,n));
 */

//@ lemma isBiggerStrictAntisym{L,M}: \forall int *t, int *s, integer n; isStrictlyBiggerPerm{L,M}(s,t,n) ==> !isStrictlyBiggerPerm{M,L}(t,s,n);
//@ lemma equivIsBigger{L,M} : \forall int *t, int *s, integer n;  isBiggerPerm{L,M}(s,t,n) ==> isBiggerPerm{M,L}(t,s,n) ==> unchangedTab{L,M}(s,t,0,n);

//À compléter :
/*@ predicate isMinPerm{L}(int *t, integer n) = \true;

    predicate isMaxPerm{L}(int *t, integer n) = \true;
 */

// Exercice 4 :

/*@ lemma maxHasNoIncrease: \forall int *t, integer n; isMaxPerm(t,n) ==> \forall integer i; 0 <= i < n-1 ==> t[i] > t[i+1];

    lemma increaseIsNoMax: \forall int *t, integer n; isPermutation(t,n) ==> (\exists integer i; 0 <= i < n-1 && t[i] < t[i+1]) ==> !isMaxPerm(t,n);

    lemma noIncreaseIsMax: \forall int *t, integer n; isPermutation(t,n) ==> (\forall integer i; 0 <= i < n-1 ==> t[i] > t[i+1]) ==> isMaxPerm(t,n);
    */

// Exercice 5 :

/*@ lemma minIsMin{L,M}: \forall int *t, *s, integer n; isMinPerm{L}(t,n) ==> isPermutation{M}(s,n) ==> isBiggerPerm{L,M}(t,s,n);

    lemma maxIsMax{L,M}: \forall int *t, *s, integer n; isMaxPerm{L}(t,n) ==> isPermutation{M}(s,n) ==> isBiggerPerm{M,L}(s,t,n);
 */

#endif

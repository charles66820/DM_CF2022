#include "limits.h"

/*@
    requires \forall integer k; 0 <= i <= k <= j < n ==> \valid(t + k);
    requires \forall integer k; 0 <= i <= k <= j < n ==> \valid_read(t + k);
    requires 0 < n <= INT_MAX;
    requires 0 <= i <= n;
    requires n >= j >= 0;
    terminates \true;
    ensures \forall integer k; i <= k <= j ==> t[k] == \old(t[j-k+i]);
*/
void reverse(int *t, unsigned int i, unsigned int j, unsigned int n);
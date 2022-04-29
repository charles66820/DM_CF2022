#include "limits.h"

/*@
    requires \valid(t + (0 .. n-1));
    requires \valid_read(t + (0 .. n-1));
    requires 0 < n <= INT_MAX;
    requires 0 <= i < j < n;
    terminates \true;
    assigns t[i .. j];
    ensures \forall integer k; i <= k <= j ==> t[k] == \old(t[j-k+i]);
*/
void reverse(int *t, unsigned int i, unsigned int j, unsigned int n);
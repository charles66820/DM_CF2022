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

/*@
    requires \valid(t + (0 .. n-1));
    requires \valid_read(t + (0 .. n-1));
    requires 0 < n <= INT_MAX;
    requires 0 <= i < j < n;
    terminates \true;
    decreases j;
    assigns t[i .. j];
    ensures \forall integer k; i <= k <= j ==> t[k] == \old(t[j-k+i]);
    ensures 0 <= i + 1 < j - 1 < n;
    ensures i > \old(i);
    ensures j < \old(j);
*/
void revers_rec(int *t, unsigned int i, unsigned int j, unsigned int n);

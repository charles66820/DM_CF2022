/*@
    terminates \true;
    ensures \forall integer k; i <= k <= j ==> t[k] == \old(t[j-k+i]);
*/
void reverse(int *t, unsigned int i, unsigned int j, unsigned int n);
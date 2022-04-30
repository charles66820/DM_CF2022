#include "formalism.h"
#include "limits.h"

/*@
    requires \valid(P + (0 .. n-1));
    requires 0 < n < INT_MAX;
    terminates \true;
    assigns P[0 .. n-1];
    ensures isPermutation(P,n);
    ensures isMinPerm(P,n);
*/
void initPerm(int *P, unsigned int n);

/*@
    requires \valid_read(P + (0 .. n-1));
    terminates \true;
    ensures isMaxPerm(P,n) ==> \result == true;
    ensures !isMaxPerm(P,n) ==> \result == false;
*/
bool isMaxPerm(int *P, unsigned int n);
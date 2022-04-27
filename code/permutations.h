#include "formalism.h"
#include "limits.h"

/*@
    terminates \true;
    ensures isPermutation(P,n);
    ensures isMinPerm(P,n);
*/
void initPerm(int *P, unsigned int n);

/*@
    terminates \true;
    ensures isMaxPerm(P,n) ==> \result == true;
    ensures !isMaxPerm(P,n) ==> \result == false;
*/
bool isMaxPerm(int *P, unsigned int n);
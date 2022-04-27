#include "nextPermutation.h"
#include "permutations.h"
#include "limits.h"

/*@ ensures \forall int* t; (isPermutation(t,n) ==> (isBiggerPerm{Post,Pre}(t,P,n) || isBiggerPerm{Post,Post}(P,t,n)));
 */
bool NextPermutation(int *P, unsigned int n);

/*@ axiomatic Value{
    logic integer value(int *t,integer n) reads t[0..n-1];

    axiom samePermSameVal{L,M} : \forall int *t, int *s, integer n; unchangedTab{L,M}(t,s,0,n) ==> value{L}(t,n) == value{M}(s,n);
    }
*/

/*@ requires \valid(t + (0..n-1));
    terminates \true;
    ensures \result == value(t,n);
    assigns \nothing;
*/
int value(int *t, unsigned int n);

/*@
    ensures \forall int* t; \separated(t+(0..n-1),P+(0..n-1)) ==> isPermutation(t,n) ==> value(t,n) >= \result;
 */
int tsp(unsigned int n, int *P);
/*@ terminates \true;
    ensures *a == \old(*b);
    ensures *b == \old(*a);
*/
void swap(int *a, int *b);
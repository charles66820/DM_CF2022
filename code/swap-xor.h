/*@ requires mem_access: \valid_read(a);
    requires mem_access : \valid_read(b);
    requires \valid(a);
    requires \valid(b);
    requires \separated(a,b);
    terminates \true;
    ensures *a == \old(*b);
    ensures *b == \old(*a);
*/
void swap(int *a, int *b);
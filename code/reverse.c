#include "reverse.h"

void reverse(int *t, unsigned int i, unsigned int j, unsigned int n)
{
    while (i < j)
    {
        int aux = t[i];
        t[i] = t[j];
        t[j] = aux;
        i++;
        j--;
    }
}
#include <stdio.h>

void swapp(int* lhs, int* rhs) // void: visszatérési érték kikerülése
{
    int s= *lhs;
    *lhs = *rhs;
    *rhs = s;
}

int main()
{
    int i = 2;
    int j = 42;
    printf("%i,%i\n", i, j);
    swapp(&i,&j);
    printf("%i,%i\n", i, j);
}
#include<stdio.h>


int main()
{
    register int i = 10;

    int* a = &i;
    printf("%d", *a);
    getchar();

    return 0;
}

// The reason this will not compile, is because 'register' means the variable is meant to be
// put inside a processor register if possible, therefore it does not have a memory address.

#include <stdio.h>

int main(void) {
    int i = 57; // i's type is "int"

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);

    // %p expects the argument to be a pointer to void
    // so we cast it to make the compiler happy.
    int *p = &i; // p's type is "pointer to an int", or "int-pointer"
    int *po; // po is a pointer, but is uninitialized and points to garbage
    po = &i; // po is assigned the address of i--p now "points to" i

    {
        int i;
        int *p; // Not a dereference, this an int-pointer

        p = &i;

        i = 10;
        *p = 20; // the thing p points to is set to 20

        printf("i is %d\n", i);
        printf("i is %d\n", *p); // dereference-p == int-i
    }
}

// CONST AND POINTERS

#include <stdio.h>

int main() {
    {
        int i = 2;
        int j = 5;
        // ptr is a pointer to a constant
        const int *ptr = &i;    // Makes no difference if it's written as 'const int' or 'int const'

        printf("*ptr: %d\n", *ptr);
//      *ptr = 100;             // error: object pointed cannot be modified using the pointer ptr
        ptr = &j;               // valid
        printf("*ptr: %d\n", *ptr);
    }
    // Up qualification
    {
        int const i = 2;       // i itself is stored in the read only area
        int j = 5;
        /* pointer to integer constant. Here i
        is of type "const int", and &i is of
        type "const int *".  And ptr is of type
        "const int", types are matching, so there are no issues */
        int const *ptr = &i;

        printf("*ptr: %d\n", *ptr);

//      *ptr = 100;             // error

        /* valid. We call it up qualification. In
        C/C++, the type of "int *" is allowed to up
        qualify to the type "const int *". The type of
        &j is "int *" and is implicitly up qualified by
        the compiler to "const int *" */
        ptr = &j;
        printf("*ptr: %d\n", *ptr);
    }
    /* Down qualification is not allowed in C++ and may cause warnings in C. Following is another example with down qualification. */
    {
        int i = 2;
        int const j = 5;

        int *ptr = &i;

        printf("*ptr: %d\n", *ptr);
        /* The below assignment is invalid in C++, results in error
        In C, the compiler *may* throw a warning, but casting is
        implicitly allowed */
        ptr = &j;
         /* In C++, it is called 'down qualification'. The type of expression
        &j is "const int *" and the type of ptr is "int *". The
        assignment "ptr = &j" causes to implicitly remove const-ness
        from the expression &j. C++ being more type restrictive, will not
        allow implicit down qualification. However, C++ allows implicit
        up qualification. The reason being, const qualified identifiers
        are bound to be placed in read-only memory (but not always). If
        C++ allows above kind of assignment (ptr = &j), we can use 'ptr'
        to modify value of j which is in read-only memory. The
        consequences are implementation dependent, the program may fail
        at runtime. So strict type checking helps clean code. */
        printf("*ptr: %d\n", *ptr);
    }
    // Constant pointer to variable
    {
        int i = 2;
        int j = 5;
        // constant pointer to an integer
        int *const ptr = &i;
        /* Above declaration is a constant pointer to an integer variable,
        means we can change the value of object pointed by pointer,
        but cannot change the pointer to point another variable. */

        printf("*ptr: %d\n", *ptr);

        *ptr = 10;

        printf("*ptr: %d\n", *ptr);

//      ptr = &j;         //  shit won't work
    }
    // Constant pointer to a constant
    {
        int i = 2;
        int j = 5;
        const int *const ptr = &i;

        printf("*ptr: %d\n", *ptr);
        printf("ptr: %x\n", ptr);
        printf("&ptr: %x\n", &ptr);

        /*
        ptr = &j;
        *ptr = 10; */
    }
    return 0;
}

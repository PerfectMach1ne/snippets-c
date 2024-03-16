#include <stdio.h>

int fun() {
    static int count = 0;
    count++;
    return count;
}

int z;

int notfun() {
    int court = 0;
    court++;
    return court;
}

int main() {
    int w;
    int hambu = 10;
    static int rguesa = 10; // ...was this supposed to prove a point about garbage variables on my device...? What?
    // 2020 comment below
    // "A static int variable remains in memory while the program is running.
    // A normal or auto variable is destroyed when a function call where the variable was declared is over.
    //
    // A static int can count a number of times a function is called, an auto variable cannot do that."
    printf("%d",fun()); // 1 in 123
    printf("%d",fun()); // 2 in 123
    printf("%d\n",fun()); // 3 in 123
    printf("%d",notfun()); // 1 in 111
    printf("%d",notfun()); // 2nd 1 in 111
    printf("%d\n",notfun()); // 3rd 1 in 111
    // 2020 comment
    // "Static variables are allocated memory in data segment, not stack segment. See memory layout of C programs for details.
    // Static variables (like global variables) are initialized as 0 if not initialized explicitly."
    static int x;
    int y;
    printf("static int: %d\ngarbage ints: %d , %d , %d",x,y,z,w);
    // 2020 comments
    // "All objects with static storage duration must be initialized (set to their initial values) before execution of main() starts.
    // So a value which is not known at translation time cannot be used for initialization of static variables.
        // THAT CONDITION DOESN'T HOLD IN C++. HERE YOU CAN DO...
        /*
#include <stdio.h>
int initializer(void)
{
    return 50;
}

int main()
{
    static int i = initializer();
    printf(" value of i = %d", i);
    getchar();
    return 0;
}
        */
        // ...AND HAVE IT COMPILE AND WORK.

    // Static global variables and functions are also possible in C/C++.
    // The purpose of these is to limit scope of a variable or function to a file.

    // Static variables should not be declared inside structure.
    // The reason is C compiler requires the entire structure elements to be placed together (i.e.) memory allocation
    // for structure members should be contiguous.
    //"
    getchar();
    return 0;
}

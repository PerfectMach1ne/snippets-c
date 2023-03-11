#include <stdio.h>

extern int x = 9;

int z = 10;

typedef long long int LL;

void calSquare(int arg) {
    printf("The square of %d is %d\n",arg,arg*arg);
}

int main(void) { // 2023: Don't panic, this is legal according to the standard. void main() isn't.
    const int a = 32;
    char b = 'G';
    extern int z;
    LL c = 1000000;

    printf("Hello World!\n");

    // printing the above variables
    printf("This is the value of the constant variable 'a': %d\n",a);
    printf("'b' is a char variable. Its value is %c\n",b);
    printf("'c' is a long long int variable. Its value is %lld\n",c);
    printf("These are the values of the extern variables 'x' and 'z'"
    " respectively: %d and %d\n",x,z);

    // value of extern variable x modified
    x=2;

    // value of extern variable z modified
    z=5;

     // printing the modified values of extern variables 'x' and 'z'
    printf("These are the modified values of the extern variables"
    " "
    "'x' and 'z' respectively: %d and %d\n",x,z);

    // using a static variable
    printf("The value of static variable 'y' is NOT initialized to 5 after the "
            "first iteration! See for yourself :)\n");

    while (x > 0) {
        static int y = 5;
        y++;
        // printing value at each iteration
        printf("The value of y is %d\n",y);
        x--;
    }

    // print square of 5
    calSquare(5);

    printf("Bye! See you soon. :)\n"); // 2023: Creepy. Stay away from me.

    return 0;
}

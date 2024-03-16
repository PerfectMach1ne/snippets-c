#include <stdio.h>

int main(int argc, char *argv[]) {
    char st[] = "CODING"; // WOW! SO EPIC1!!1

    // printf() returns total number of Characters Printed, Or negative value if an output error or an encoding error

    printf("While printing ");
    printf(", the value returned by printf() is : %d\n", printf("%s", st));

    long int n = 123456789;

    // The printf() function in the code written below returns 9. As ‘123456789’ contains 9 characters.

    printf("While printing ");
    printf(", the value returned by printf() is : %d\n", printf("%ld", n));

    // scanf() returns the total number of inputs scanned successfully or EOF if input failure occurs before the first receiving argument was assigned.

    char a[64], b[64], c[64];

    printf("\n First scanf() returns : %d", scanf("%s", a)); // THE REASON WE DONT USE &'S HERE IS BECAUSE NAME OF THE ARRAY IS SYNONYMOUS
                                                             // TO A POINTER TO SAID ARRAY

    printf("\n Second scanf() returns : %d", scanf("%s %s", a, b));

    printf("\n Third scanf() returns : %d", scanf("%s%s%s", a, b, c));

    return 0;
}

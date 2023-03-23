#include <stdio.h>

int main(void) {
    int w;
    int x = 10, y = 20; // single expression
    int z = 30; w = 40; // separate expression

    printf("%d %d\n%d %d\n", x, y, z, w);

    /* With the comma operator, the value of the comma expression is the value of the
       rightmost expression */
    x = (0, -1, -2);

    printf("%d\n", x);
    /* One common place the comma operator is used is in for loops to do multiple things
     in each section of the statement: */
    for (int i = 0, j = 0; i < 100; i++, j++)
        printf("%d, %d\n", i, j);

    return 0;
}

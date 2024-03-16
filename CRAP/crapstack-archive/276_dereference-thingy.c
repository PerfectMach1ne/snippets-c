#include <stdio.h>

void increment(int *p) {
    *p = *p + 1; // add one to the thing p points to
}

int main(void) {
    int i = 10;
    int *j = &i;

    printf("i is %d\n", i); // prints "10"
    printf("i is also %d\n", *j); // prints "10"

    increment(j); //j is an int* to i
    printf("i is %d\n", i); // prints "11"

    increment(&i);
    printf("i is %d\n", i); // prints "12"

}

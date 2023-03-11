#include <stdio.h>

// function prototype scope
// (not part of a function definition)
int Sub(int num1, int num2);

// File scope
int num1;

// Function to subtract
int Sub(int num1, int num2) {
    return (num1 - num2);
}

// Driver method
int main(void) {
    printf("%d\n", Sub(10,5));
    return 0;
}

#include <stdio.h>

int my_strlen(char *s) {
    // Start scanning from the beginning of the string
    char *p = s;

    // Scan until we find the NUL character
    while (*p != '\0')
        p++;

    // Return the difference in pointers
    /// Remember that you can only use pointer
    /// subtraction between two pointers that
    /// point to the same array!
    return p - s;
}

int main(void) {
    printf("%d\n", my_strlen("Hello, world!")); // Prints 13
}

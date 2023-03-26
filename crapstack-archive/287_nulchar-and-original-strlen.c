#include <stdio.h>

int my_strlen(char *s);

int main(void) {
    char *s = "HEELOOOO WOOOORLD!!!!";

    printf("The string is %zu bytes long.\n", my_strlen(s));
    // strlen returns size_t
}

int my_strlen(char *s) {
    int count = 0;

    while (s[count] != '\0')
        count++;

    return count;
}

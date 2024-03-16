#include <stdio.h>
#include <string.h>

int main(void) {
    char *s = "HEELOOOO WOOOORLD!!!!";

    printf("The string is %zu bytes long.\n", strlen(s));
    // strlen returns size_t
}

#include <stdio.h>

int main(void) {
    printf("Outside code block.\n");
    {
        printf("Inside a code block.\n");
    }

    return 0;
}

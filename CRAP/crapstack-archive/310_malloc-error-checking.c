#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x;

    if ((x = malloc(sizeof(int) * 10)) == NULL) {
        printf("Error allocating 10 ints\n");
        // do stuff here to deal with it
    }
}

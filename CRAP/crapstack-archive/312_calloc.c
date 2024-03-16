#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = calloc(10, sizeof(int));

    int *q = malloc(10 * sizeof(int));
    memset(q, 0, 10 * sizeof(int));
}

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int num_floats = 4;

    float *p = malloc(num_floats * sizeof(float));

    num_floats *= 2;

    // np = realloc(p, num_floats); // WRONG bc u need bytes not number of elements

    np = realloc(p, num_floats * sizeof(float));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Allocate space for a single int ( sizeof(int) bytes-worth!!!! )
    int *p = malloc(sizeof(int));

    *p = 12; // Store something there

    printf("%d\n", *p);

    free(p); // all done

    //*p = 5749 // error bruh. undefined behavior bc used after free()

    int *q = malloc(sizeof *q); // *q is an int, so smae as sizeof(int)
}

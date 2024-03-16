#include <stdio.h>
#include <stdlib.h>

typedef enum {false, true} bool;

int main(void) {
    // Identical
    char *p = malloc(57);
    char *pp = realloc(NULL, 57);

    // useful when you have allocation loop of some kind
    // and don't want to make a special case for the first malloc()
    // like:
    int *q = NULL;
    int length = 0;
    bool done = false;
    // my silly experiments
    void *pos = &q;
    int *qwerty = q;

    while (!done) {
        // Allocae 10 more ints:
        length += 10;
        q = realloc(q, sizeof *q * length);
        // Do amazing thing
        // ...
        // ... ...
        // ... ... ...
        if (length == 570)
            done = true;
        //printf("[%p] ", q);
    }
    printf("\n");
    // my silly experiments
    printf("%d %d %d %p %p", length, pos, &q, qwerty, q);
}

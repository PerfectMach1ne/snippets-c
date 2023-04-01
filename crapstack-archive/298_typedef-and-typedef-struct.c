#include <stdio.h>

struct animal {
    char *name;
    int leg_count, speed;
};

// original name     new name
//          |          |
//          v          v
//      |-----------| |----|
typedef struct animal animal;

// exactly same as above example
typedef struct aminal {
    char *name;
    int leg_count, speed;
} aminal; // new name

int main(void) {
    typedef int muffin;
    muffin x = 10;

    printf("%d", x); // x is an int

    struct animal y; //works
    animal z; // works bc it's an alias

    struct aminal w; //works
    aminal q; // works bc it's an alias
}

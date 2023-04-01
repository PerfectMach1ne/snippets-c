#include <stdio.h>

typedef struct {
    char *name;
    int leg_count, speed;
} animal; // alias new name

typedef struct {
    int x, y;
} point;

point p = {.x=20, .y=40};

int main(void) {
    // THIS will break because no such struct was declared
    // struct animal y;
    // now THAT will work because this alias was given to an anonymous struct
    animal z;

    printf("%d, %d\n", p.x, p.y); // 20, 40
}

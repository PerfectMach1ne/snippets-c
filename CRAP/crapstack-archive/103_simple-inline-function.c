// Doesn't work
// 2023 note: BECAUSE YOU GOOFY ASS DIDN'T PUT THE %d 's IN THE PRINTF LMAOOOOOOOOOOOO

#include <stdio.h>

inline int abs(int i) {
    return ((i < 0) ? (-i) : (i));
}

int main(void) {
    int x = abs(-5), y = abs(2);
    printf("|-5| = %d\n",x);
    printf("|2| = %d\n",y);

    return 0;
}

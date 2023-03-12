#include <stdio.h>

const int R = 100;

int main() {
    int i, p, pri[R];
    int ps = 2;
    int test;
    pri[0] = 2;
    pri[1] = 3;

    for (p = 5; p <= R; p += 2) {
        test = 1;
        // 2023: I guess it starts with 1, cause incrementing the first loop by 2 removes the need to check for divisibility by 2.
        for (i = 1; test && p / pri[i] >= pri[i]; i++) {
            printf("[%d / %d = %d]\n", p, pri[i], p / pri[i]);
            if (p % pri[i] == 0) test = 0;
        }
        if (test == 1) {
            pri[ps] = p;
            ps++;
        }
    }
    for (i=0; i<ps; ++i) {
        printf("%i  ", pri[i]);
    }
    return 0;
}

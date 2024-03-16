#include <stdio.h>

int main() {
    char ch1 = 125, ch2 = 10;
    ch1 = ch1 + ch2;
    printf("%d\n", ch1);
    printf("%c\n", ch1);
    printf("%c\n", ch1 - ch2 - 4);
    return 0;
}

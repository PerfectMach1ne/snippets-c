#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int notStatic() {
    int count = 0;
    count++;
    return count;
}

int yesStatic() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    char s;
    int x, y = 0;
    bool loop = false;

    while (!loop) {
        switch (s = getchar()) {
            case 'a':
                x = yesStatic();
                printf("%d\n", x);
                break;
            case 'b':
                y = notStatic();
                printf("%d\n", y);
                break;
            case '0':
                loop = true;
                break;
        }
    }

    return 0;
}

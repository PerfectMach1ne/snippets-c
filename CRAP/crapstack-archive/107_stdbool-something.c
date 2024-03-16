#include <stdio.h>
#include <stdbool.h>

// typedef enum { F , T } boolean;      alternate method with enum

int main() {
    bool arg[2] = {true, false};
    bool arg_[2] = {false, true};
    printf("%d, %d\n%d, %d", arg[0], arg[1], arg_[0], arg_[1]);
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    bool arr[2] = {true, false};
    for (int i = 0; i < 2; i++)
        printf("%u",arr[i]); // %d or %u is fine
    return 0;
}

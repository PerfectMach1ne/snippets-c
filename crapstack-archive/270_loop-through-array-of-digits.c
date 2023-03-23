// Looping through arrays of digits
//
// Corresponding C scrap file path on my local crappy code stash:
// D:\Programming\C\CrapStack series C_I\270
#include <stdio.h>

int main() {
    char charIntArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char charCharArr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int intArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("charIntArr:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", charIntArr[i]);
    }
    printf("\ncharCharArr:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", charCharArr[i] - '0');    // The charVar - '0' trick for converting
    }
    printf("\nintArr:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", intArr[i]);
    }

    return 0;
}

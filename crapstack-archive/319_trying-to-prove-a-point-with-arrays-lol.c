#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, [4]=5, [2]=3, [3]=4};

    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }

    printf("\n");

    int arr_[] = {[4]=5, 1, 2, [2]=3, [3]=4};

    for (int i = 0; i < 5; i++) {
        printf("%d", arr_[i]);
    }
}

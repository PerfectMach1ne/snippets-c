#include <stdio.h>

int main(int argc, char *argv[]) {
    int test[5] = {1,2,3,4,5,6};
    for (int i=0; i<=6; i++)
        printf("test[%d] = %d\n",i,test[i]);
    test[5] = 6;
    test[6] = 7;
    printf("\ntest[5] = %d\ntest[6] = %d",test[5],test[6]);
    return 0;
}

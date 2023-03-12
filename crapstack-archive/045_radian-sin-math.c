#include <stdio.h>
#include <conio.h>
#include <math.h>

#define R_to_D 57.29578     // Do zamiany stopni na radiany

int main(int argc, char *argv[]) {
    for (float i = 0; i < 95; i += 5.0) {
        printf("x = %8.2f   sin(x) = %9.4f\n",i,sin(i/R_to_D));
    }
    getch();
    return 0;
}

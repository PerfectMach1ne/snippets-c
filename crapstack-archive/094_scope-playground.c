// Block scope of variables
#include <stdio.h>

int main() {
    {
        int x = 10, y = 20;
        {
            printf("x = %d, y = %d\n", x, y);
            // The outer block contains
            // declaration of x and
            // y, so following statement
            // is valid and prints
            // 10 and 20
            {
                int y = 40;
                // y is declared again,
                // so outer block y is
                // not accessible in this block
                x++;
                // Changes the outer block
                // variable x to 11
                y++;
                // Changes this block's
                // variable y to 41
                printf("x = %d, y = %d\n", x, y);
            }
            printf("x = %d, y = %d\n", x, y);
            // This statement accesses
            // only outer block's
            // variables

        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    printf("abababa\taababababa\n");
    printf("abababa\vtbababa\n"); // goes to show that \v is obsolote in this situation
    printf("?");
    printf("\?");
    printf("\n%o %o",015,9); //octal number
    printf("\n%x %x",0xF3,21); //hexadecimal number
    printf("\n\0"); //da NULL
    return 0;
}

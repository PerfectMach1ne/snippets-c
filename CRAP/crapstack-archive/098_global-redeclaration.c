#include <stdio.h>

int x;
int x = 5;  // C allows redeclaration of global variables, when the first declaration doesn't initialize the variable
/*  You cannot, however, redefine a global variable:
int x = 10;     <= Error because of line 4 initialization */

int main() {
//  int x;
//  int x = 5;  Compiler error - locals cannot be redeclared;
    printf("%d", x);
    return 0;
}

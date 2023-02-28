#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    printf("printf() prints formatted data to stdout (standard output, console).\n");
    char string[] = "puts() outputs a string & an \\n to stdout.";
    puts(string);
    printf("scanf() reads formatted data from stdin.\n");
    char c; // Notice it's just a char
    scanf("%c",&c); // > ededed
    printf("%c\n",c); // < e
    char overfl[100];
    scanf("%s",overfl); // automatically outputs overflow
    printf("%s\n",overfl); // < deded
    getche(); // "Little non-standard weirdo from conio.h; It reads a single character from the keyboard and displays immediately
              // on output screen without waiting for enter key."
    char overfl_2[128];
    char overfl_3[128];
    gets(overfl_2); // "cplusplus.com heretic. Gets string from stdin."
    return 0;
}

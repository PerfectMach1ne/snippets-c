#include <stdio.h>
#include <stdlib.h>
// Define/defined constants
#define floatVar0 3.1415926
#define floatVar1 3.141592
#define floatVar2 3.14
#define theC 'C'
#define intVal 21

int main(int argc, char *argv[]) {
    printf("floatVar0: %f\n", floatVar0); // 3.141593 (it gets rounded up a little)
    printf("floatVar1: %f\n", floatVar1); // 3.141592
    printf("floatVar2: %f\n", floatVar2); // 3.140000
    printf("intVal: %d\n", intVal); // 21
    printf("the %c\n", theC); // C
    const char hehelong[10] = "123456789"; //
    const char hehetrash[10] = "0123456789"; // 2020 comment: "for some reason making it as long as the array causes issues"
    // ..of course the "some reason" is just how arrays work.
    const char hahalong[10] = "short?";
    printf("%s\n", hehelong);
    printf("%s\n", hehetrash);
    printf("%s\n", hahalong);
    return 0;
}

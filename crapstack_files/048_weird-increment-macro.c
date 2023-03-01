#include <stdio.h>
#define INCR(x) ++x // The macros can take function like arguments, the arguments are not checked for data type.
                    // For example, the following macro INCREMENT(x) can be used for x of any data type.

                    /* Also, note. These are case sensitive! THIS \/\/\/ WON'T work:
#define INCR(X) ++x
                    ** And NEITHER will THIS:
#define INCR(x) ++X */

int main()
{
    char *ptr = "GeeksQuiz but I swear I didn't Ctrl+C this";
    int x = 10;
    printf("%s  ", INCR(ptr));
    printf("%d", INCR(x));
    return 0;
}

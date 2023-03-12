// We can remove already defined macros using :
// #undef MACRO_NAME

#include <stdio.h>
#define LIMIT 100
int main() {
    printf("%d",LIMIT);
#undef LIMIT
    printf("%d",LIMIT); // Error, because LIMIT is no longer defined
    return 0;
}

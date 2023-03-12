#include <stdio.h>
// The tokens passed to macros can be concatenated using operator ## called Token-Pasting operator.
#define merge(a, b) a##b
// A token passed to macro can be converted to a string literal by using # before it.
#define get(c) #c

int main() {
    printf("%d ", merge(12, 34));
    printf("%s", get(TransbianCodingOnline2003));
}

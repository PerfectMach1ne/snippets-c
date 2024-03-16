#include <stdio.h>
#include <string.h>

int main(void) {
    // void *memcp(void *s1, void *s2, size_t n);
    // Copies n bytes of memory starting from adress s1
    // into the memory starting at address s2.
    char s[] = "Oats!";
    char t[100];

    printf("%zu\n", sizeof(s));
    // chars are always 1 byte large, so we can just plop in a magic number 6
    memcpy(t, s, 6); // Copy 6 bytes including the NUL terminator

    printf("%s\n", t);

    int a[] = {57, 745, 597};
    int b[3];

    memcpy(b, a, 3 * sizeof(int)); // Copy 3 ints of data

    printf("%d\n", b[1]); // 22

    /// You can also copy structs with memcpy, however
    /// it's best to instead simply use the = operator
    /// my_struct = your_struct;

    char C = 'C';

    void *p = &C; // p points to 'X'
    char *c = p;  // q also points to 'X' but has no void* limitations

    // Compiler error speedrun any%
    // printf("%c\n", *p);
    printf("%c\n", *c);
    printf("%p\n", p);
}

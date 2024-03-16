#include <stdio.h>
#include <string.h>

int main(void) {
    {
        char s[] = "Hello wordllll bllp plppfdlpbl fplbfbbpflt";
        char *t;

        // This makes a copy of the pointer, not a copy of the string!
        t = s;

        // We modify t
        t[0] = 'z';

        // But printing s shows the modification!
        // Because t and s point to the same string!
        printf("%s\n", s); // "zello wordllll bllp plppfdlpbl fplbfbbpflt"
    }
    {
        char s[] = "Hello world!";
        char t[100]; // plentey of room

        // This makes a copy of the string
        // But strncpy() is a better and safer function for this job, actually.
        strcpy(t, s);

        // We modify t
        t[0] = 'z';

        // And s remains unaffected because it's a different string
        printf("%s\n", s); // "Hello, world!"

        // But t has been changed
        printf("%s\n", t); // "zello, world!"
    }
}

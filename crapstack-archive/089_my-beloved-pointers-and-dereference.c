#include <stdio.h>
#include <string.h>

int main() {
    char c = 'Z';
    char a[] = "Hello world";

    printf("%c\n%s",c,a);

    char *ptr1 = &c;
    char *ptr2 = a;
    char *ptr3 = &a[0];
    char *ptr4 = &a[6];
    char *ptr5 = a + 6;

    printf("\n%x %i\n%c %c %c %c\n",ptr1,ptr1,*ptr2,*ptr3,*ptr4,*ptr5); // 2023: This is dereference, right?
    // Yes: https://stackoverflow.com/questions/14224831/meaning-of-referencing-and-dereferencing-in-c
    // Dereferencing a pointer - retrieving a value from the memory address that is pointed by the pointer.

    char (*ptr)[12] = &a;   // 2020: A pointer to an array of 12 characters;
                            // 2023 correction: 11 characters, the size is 12 though.

    printf("%d", sizeof(a) / sizeof(char));
    if ((*ptr)[0] == 'H') printf("\nYies");
    if ((*ptr)[6] == 'w') printf("\nYies");
    if (*(*ptr + 6) == 'w') printf("\nYies");

    return 0;
}

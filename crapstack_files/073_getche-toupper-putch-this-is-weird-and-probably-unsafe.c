/**TIL:
   The Microsoft-specific function name getche is a deprecated alias for the _getche function. By default,
   it generates Compiler warning (level 3) C4996. The name is deprecated because it doesn't follow the Standard
   C rules for implementation-specific names. However, the function is still supported. */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
    int i;
    char znak[81];

    printf("Wprowadz tekst z klawiatury\n");
    for (i = 0; i < 80; i++) {
        znak[i] = _getche();
        znak[i] = toupper(znak[i]);
        if (znak[i] == '\r') break;
    }
    znak[i] = '\0';
    // What does this thing even DO i am SCARED
    for (i = 0; i < sizeof(znak) / sizeof(char); i++) {
        _putch(znak[i]);
    }

    return 0;
}

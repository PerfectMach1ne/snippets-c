// This code crashed on me so for my own good and out of respect for my laptop, I probably should not launch it again.
#include <stdio.h>

int main() {
    // Instrukcje puste
    char String[100];
    char *str = String;
    fgets(String, 100, stdin);
    for (; *str == ' '; str++); // Idk why this doesn't work tbh, but u get the idea (2 years later perspective: no I don't)
    for (unsigned int lol; lol < 4294967295; lol++);
    puts(String);
    return 0;
}

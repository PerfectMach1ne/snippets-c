#include <stdio.h>

int main(void) {
  char c[] = {87, 89, 83, 73};
  for (int i = 0; i < sizeof(c); i++)
    putchar(c[i]);

  return 0;
}

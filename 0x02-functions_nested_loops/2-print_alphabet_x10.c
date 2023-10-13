#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercaseten time.
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
char letter;
int i;
i = 0;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
}
_putchar('\n');
}



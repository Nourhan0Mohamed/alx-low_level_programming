#include "main.h"

/**
 *print_ 10 times the alphabet_in lowercase,make alphabet X10 times.
 */

void print_alphabet_x10(void)
{
char letter;
int i;
i = 0;
while (i < 10)
for (letter = 'a'; letter <= 'z'; letter++)
-putchar(letter);
-putchar('\n');
i++;
}


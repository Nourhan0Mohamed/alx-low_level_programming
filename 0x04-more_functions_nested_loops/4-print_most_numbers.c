#include "main.h"

/**
 * print_most_numbers-Printsthe numbers from 0to9.
 * excluding 2and4, followed by a new line.
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

/* Print all possible combinations of single-digit numbers */
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');

/* Print ", " if the current digit is not 9 */
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}

/* Print a newline character */
putchar('\n');

return (0);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens_digit;
int ones_digit;

/* Print all possible different combinations of two digits */
for (tens_digit = 0; tens_digit <= 8; tens_digit++)
{
for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
{
putchar(tens_digit + '0');
putchar(ones_digit + '0');

/* Print ", " if the current combination is not 89 */
if (tens_digit != 8 || ones_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}

/* Print a newline character */
putchar('\n');

return (0);
}

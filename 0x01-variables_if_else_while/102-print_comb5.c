#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2;

/* Print all possible combinations of two two-digit numbers */
for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

/* Print ", " if the current combination is not 98 99 */
if (num1 != 98 || num2 != 99)
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

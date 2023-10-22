#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
/* Print single-digit numbers in base 10 */
for (number = 0; number < 10; number++)
{
putchar(number + 48);
}

/* Print a newline character */
putchar('\n');

return (0);
}

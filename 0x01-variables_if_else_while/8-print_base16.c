#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit;

/* Print numbers of base 16 in lowercase */
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)

{
putchar(digit);
}

/* Print a newline character */
putchar('\n');

return (0);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Print alphabet excluding 'q' and 'e' */
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}

/* Print a newline character */
putchar('\n');

return (0);
}

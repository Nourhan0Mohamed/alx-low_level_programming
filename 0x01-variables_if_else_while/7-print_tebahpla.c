#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Print lowercase alphabet in reverse */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

/* Print a newline character */
putchar('\n');

return (0);
}

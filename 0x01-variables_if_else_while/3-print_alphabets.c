#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase;
char uppercase;

/* Print lowercase alphabet */
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}

/* Print uppercase alphabet */
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}

/* Print a newline character */
putchar('\n');

return (0);
}

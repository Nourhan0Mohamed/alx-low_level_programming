#include "main.h"

/**
 * print_last_digit - Extracts and prints the last digit of a number.
 * @number: The input number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
int last_digit;

/* Check if the number is negative */
if (number < 0)
number = -number;

/* Calculate the last digit */
last_digit = number % 10;

/* Print the last digit as a character */
_putchar(last_digit + '0');

/* Return the last digit */
return (last_digit);
}

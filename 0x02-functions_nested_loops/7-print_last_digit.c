#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @number: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */

int print_last_digit(int number)

{
int lastDigit = number % 10;

if (lastDigit < 0)
lastDigit *= -1;

_putchar(lastDigit + '0');

return (lastDigit);
}

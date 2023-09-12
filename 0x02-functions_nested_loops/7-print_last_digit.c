#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *@number: The number to be treated
 * Return: 1 for lowercase character or 0 for anything else
 */
int print_last_digit(int number)
{
int last_digit = number % 10;
_putchar(last_digit + '0');
return (last_digit);
}

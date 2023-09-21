#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * print_number - Prints an integer to the console using only the `_putchar`
 * function,without using `long`, arrays, pointers,
 * or hard-coding special values.
 *
 * @n: The integer to print.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
return;
}

if (n > 0)
{
print_number(n / 10);
_putchar((n % 10) + '0');
}
}



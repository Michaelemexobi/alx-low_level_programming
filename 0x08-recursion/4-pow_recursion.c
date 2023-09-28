#include "main.h"
#include <stdio.h>


/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * This function uses recursion to compute x^y.
 *
 * Return: x raised to the power of y. If y is less than 0,
 * returns -1 to indicate an error.
 * Any number raised to the power of 0 is 1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

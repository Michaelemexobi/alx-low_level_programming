#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square rootof a number
 * @n: The number for which square root is to be calculated.
 *
 * Return: The resulting square root of 'n'.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (actual_sqrt_recursion(n, 0));
}
}

/**
 * actual_sqrt_recursion - Finds the natural square root of a number.
 * @n: The number for which square root is to be calculated.
 * @i: Current guess for the square root.
 *
 * This function uses recursion to
 * find the natural square root of a non-negative integer.
 *
 * Return: The square root of 'n'.
 * If 'n' does not have a natural square root, returns -1.
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (actual_sqrt_recursion(n, i + 1));
}

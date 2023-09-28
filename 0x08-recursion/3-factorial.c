#include "main.h"
#include <stdio.h>


/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which factorial is to be calculated.
 *
 * This function uses recursion to compute the factorial of a non-negative
 * integer.
 *
 * Return: The factorial of 'n'. If 'n' is less than 0,
 * it returns -1 to indicate an error.
 * Factorial of 0 is 1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}


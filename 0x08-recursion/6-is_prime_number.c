#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if a given integer is a prime number.
 * @n: The integer to be checked.
 *
 * This function determines whether
 * the input integer 'n' is a prime number or not.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 * Numbers less than 2 are not prime.
 */

int is_prime_number(int n)
{
int i;

if (n < 2)
{
return (0);
}

for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
return (0);
}
}

return (1);
}

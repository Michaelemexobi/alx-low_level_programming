#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to a string.
 *
 * Description: This function converts a string to an integer, taking into
 * account any leading +/- signs. If there are no numbers in the string, it
 * returns 0. It does not use long
 * and does not declare new variables of array type.
 *
 * Return: The converted integer value.
 */


int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
else
if (*s >= '0' && *s <= '9')
{
int digit = *s - '0';

if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}

result = result * 10 + digit;
}
else
if (*s == '+')
{

}
else
if (result != 0)
{
break;
}

s++;
}

return (result *sign);
}

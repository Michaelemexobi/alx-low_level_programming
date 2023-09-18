#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to a string.
 *
 * Description: This function converts a string to an integer, taking into
 * account any leading +/- signs. If there are no numbers in the string, it
 * returns 0. It does not use long and does not declare new variables of array type.
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
result = result * 10 + (*s - '0');
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

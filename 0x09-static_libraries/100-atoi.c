#include "main.h"

/**
 * _atoi - Converts a string into an integer.
 * @s: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1, i = 0;
unsigned int unsigned_result = 0;

while (!(s[i] >= '0' && s[i] <= '9' && s[i] != '\0'))
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
{
unsigned_result = (unsigned_result * 10) + (s[i] - '0');
i++;
}

return (sign *unsigned_result);
}


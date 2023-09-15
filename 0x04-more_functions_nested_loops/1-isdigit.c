#include "main.h"
/**
 * _isdigit - function checks for a digit (0 to 9)
 * @c: inter to be checked
 * Return: 1 if C is a digit, 0 if not
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}

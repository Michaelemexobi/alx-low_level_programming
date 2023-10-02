#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 * Return: The number of characters in the initial segment of s which consist
 * only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
n++;
break;
}
else
if (accept[a + 1] == '\0')
return (n);
}
s++;
}

return (n);
}


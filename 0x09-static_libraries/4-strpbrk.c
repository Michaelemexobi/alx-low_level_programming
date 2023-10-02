#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the first occurrence in s of any character in accept,
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
int b;
while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
{
return (s);
}
}
s++;
}
return ('\0');
}


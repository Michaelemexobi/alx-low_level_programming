#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate from src.
 * Return: Pointer to the resulting string in dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}

dest[a] = '\0';

return (dest);
}

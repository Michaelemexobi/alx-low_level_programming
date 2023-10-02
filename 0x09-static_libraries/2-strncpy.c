#include "main.h"

/**
 * _strncpy - Copies at most 'n' characters from the source to the destination.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to be copied.
 * Return: Pointer to the resulting string in 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
int b = 0;

while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}

while (b < n)
{
dest[b] = '\0';
b++;
}

return (dest);
}

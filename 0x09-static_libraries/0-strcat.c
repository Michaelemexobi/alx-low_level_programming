#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}

dest[a] = '\0';

return (dest);
}


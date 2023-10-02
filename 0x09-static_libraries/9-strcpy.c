#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: Pointer to the destination where the string is copied.
 * @src: Pointer to the source string to be copied.
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;
while (*(src + a) != '\0')
{
a++;
}
for (; b < a; b++)
{
dest[b] = src[b];
}

dest[a] = '\0';

return (dest);
}

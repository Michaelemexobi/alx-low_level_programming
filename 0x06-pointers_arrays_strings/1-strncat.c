#include <stdio.h>

/**
 * _strncat - Concatenates at most n bytes from src to dest.
 *
 * @dest: Pointer to the destination string.
 * @src:  Pointer to the source string.
 * @n:    Maximum number of characters to be appended from src.
 *
 * Return: Pointer to the resulting string (dest).
 *
 * This function appends at most n characters from the source string (src) to
 * the end of the destination string (dest), overwriting the terminating null
 * byte ('\0') at the end of dest, and then adds a new terminating null byte.
 */
char *_strncat(char *dest, const char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}
*ptr = '\0';
return (dest);
}


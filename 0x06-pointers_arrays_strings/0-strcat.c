#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 *
 * This function appends the characters from the source string (src) to the end
 * of the destination string (dest), overwriting the terminating null byte
 * ('\0') at the end of dest, and then adds a new terminating null byte.
 *
 * @dest: Pointer to the destination string.
 * @src:  Pointer to the source string.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, const char *src)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}

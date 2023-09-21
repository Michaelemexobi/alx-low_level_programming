#include <stdio.h>

/**
 * _strncpy - Copies at most n characters from src to dest.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied.
 *
 * Return: Pointer to the resulting string (dest).
 *
 * This function copies at most n characters from the source string (src)
 * to the destination string (dest).
 * If the length of src is less than n, the
 * remaining characters in dest will be filled with null bytes ('\0').
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *ptr = dest;
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}

while (n > 0)
{
*ptr = '\0';
ptr++;
n--;
}
return (dest);
}


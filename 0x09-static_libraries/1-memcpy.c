#include "main.h"

/**
 * _memcpy - Copies memory areas.
 * @dest: Destination memory where data is copied.
 * @src: Source memory from where data is copied.
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int p = 0;
for (; p < n; p++)
{
dest[p] = src[p]; }
return (dest);

}

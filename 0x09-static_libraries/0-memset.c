#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value.
 *  
 * @s: Pointer to the start of the memory block.
 * @b: The value to be set.
 * @n: Number of bytes to be modified.
 *
 * Return: A pointer to the modified memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

for (; n > 0; a++)
{
s[a] = b;
n--;
}

return (s);
}

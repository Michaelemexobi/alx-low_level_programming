#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 *
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
char *ptr = str;
int i;

while (*ptr != '\0')
{
for (i = 0; i < 52; i++)
{
if ((*ptr >= 'a' && *ptr <= 'z' && *ptr == 'a' + (i % 26)) ||
(*ptr >= 'A' && *ptr <= 'Z' && *ptr == 'A' + (i % 26)))
{
*ptr = (i < 26) ? 'a' + (i % 26) : 'A' + (i % 26);
break;
}
}
ptr++;
}

return (str);
}


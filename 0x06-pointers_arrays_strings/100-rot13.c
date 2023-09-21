#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13Alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i;

while (*ptr != '\0')
{
for (i = 0; i < 52; i++)
{
if (*ptr == alphabet[i])
{
*ptr = rot13Alphabet[i];
break;
}
}
ptr++;
}
return (str);
}

#include <stdio.h>

/**
 * leet - Encodes a string into "1337".
 *
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
char *ptr = str;
char leetDict[] = {'4', '3', '0', '7', '1'};
char *letters = "aeotlAEOTL";

while (*ptr != '\0')
{
int i = 0;
while (letters[i] != '\0')
{
if (*ptr == letters[i])
{
*ptr = leetDict[i];
break;
}
i++;
}
ptr++;
}

return (str);
}

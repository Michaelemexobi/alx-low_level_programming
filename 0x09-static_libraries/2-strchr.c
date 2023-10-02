#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the input string.
 * @c: The character to be found.
 *
 * Return: Pointer to the first occurrence of the character,
 * or NULL if not found.
 */
char *_strchr(char *s, char c)
{
int a = 0;

for (; s[a] != '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}

return (NULL);
}

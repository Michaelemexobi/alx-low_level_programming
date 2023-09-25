#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}

if (*n == '\0')
{
return (h);
}
haystack = h + 1;
}

return (NULL);
}


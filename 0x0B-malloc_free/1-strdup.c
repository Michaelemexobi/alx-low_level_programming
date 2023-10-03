#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
char *duplicate;

if (str == NULL)
{
return (NULL);
}

duplicate = (char *)malloc(strlen(str) + 1);

if (duplicate == NULL)
{
return (NULL);
}

strcpy(duplicate, str);

return (duplicate);
}


#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A pointer to the string to be measured.
 *
 * This function recursively counts the number of characters in a string
 * until the null terminator is encountered, indicating the end of the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}


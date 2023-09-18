#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and returns the length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

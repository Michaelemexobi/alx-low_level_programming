#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: A pointer to the string to be printed.
 *
 * This function prints the characters of a string one by one, and
 * when the end of the string is reached (null terminator '\0'),
 * it adds a newline character to create a new line.
 * Return: 0 Always success
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}


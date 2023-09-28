#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: A pointer to the string to be printed in reverse.
 *
 * This function recursively prints the characters of a string in reverse order
 * Return: 0 Always success
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}


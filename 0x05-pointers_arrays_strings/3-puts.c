#include "main.h"
#include <stdio.h>

#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string followed by a new line to the standard output.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}

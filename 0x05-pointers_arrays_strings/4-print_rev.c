#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string in reverse followed by a new line
 * to the standard output.
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i--; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}

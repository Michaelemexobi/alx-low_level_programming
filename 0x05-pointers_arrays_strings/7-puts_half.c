#include "main.h"
#include <stdio.h>


/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the second half of the string followed by a new line.
 * If the number of characters is odd, it prints the last n characters,
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
int length = 0;
int i;
int start;

while (str[length] != '\0')
{
length++;
}

start = length % 2 == 0 ? length / 2 : (length - 1) / 2;

for (i = start; i < length; i++)
{
putchar(str[i]);
}

putchar('\n');
}

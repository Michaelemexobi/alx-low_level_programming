#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and reverses the order of characters in the string.
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char temp;


while (s[i] != '\0')
{
i++;
}
i--;

while (j < i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
j++;
i--;
}
}

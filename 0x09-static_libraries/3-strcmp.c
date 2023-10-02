#include "main.h"

/**
 * _strcmp - Compare string values.
 * @s1: First input string.
 * @s2: Second input string.
 * Return: Difference between the ASCII values of s1[a] - s2[a].
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}

return (0);
}


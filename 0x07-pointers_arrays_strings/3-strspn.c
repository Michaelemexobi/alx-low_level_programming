#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The string containing acceptable characters.
 *
 * Return: number of bytes in initial segment s consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;
char *a;
while (*s)
{
found = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
found = 1;
break;
}
}
if (found)
{
count++;
s++;
}
else
{
break;
}
}
return (count);
}

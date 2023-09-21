#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: 0 if s1 is equal to s2, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
 *
 * This function compares the two strings s1 and s2.
 * It returns an integer value
 * indicating the comparison result:
 *   - Returns 0 if s1 is equal to s2.
 *   - Returns a negative value if s1 is less than s2.
 *   - Returns a positive value if s1 is greater than s2.
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

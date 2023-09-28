#include "main.h"

/**
 * check_pal - check the characters recursively for a palindrome.
 * @s: The string to be checked.
 * @i: iterator.
 * @len: The length of the string.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);

return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to reverse.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}



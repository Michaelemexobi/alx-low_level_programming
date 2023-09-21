#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 *
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result buffer, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int sum;
int i = 0;
int j = 0;

while (n1[i] != '\0' || n2[j] != '\0')
{
int digit1 = (n1[i] != '\0') ? (n1[i] - '0') : 0;
int digit2 = (n2[j] != '\0') ? (n2[j] - '0') : 0;

sum = digit1 + digit2 + carry;
if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
if (i + j < size_r - 1)
{
r[i + j] = sum + '0';
}
else
{
return (0);
}
i++;
j++;
}
if (carry == 1 && i + j < size_r - 1)
{
r[i + j] = '1';
r[i + j + 1] = '\0';
}
else
if (i + j < size_r)
{
r[i + j] = '\0';
}
else
{
return (0);
}
return (r);
}


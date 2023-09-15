#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = size - 1; j >= 0; j--)
{
if (j > i)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

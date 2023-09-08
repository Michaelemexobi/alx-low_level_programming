#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 Always successful
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (i < j)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


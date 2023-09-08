#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 Always (successful)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
if (i < 10)
{
putchar('0');
}
putchar((i % 10) + '0');
putchar(' ');
if (j < 10)
{
putchar('0');
}
putchar((j % 10) + '0');
if (i == 99 && j == 99)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}


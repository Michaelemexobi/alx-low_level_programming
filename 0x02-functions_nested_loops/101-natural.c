#include <stdio.h>
/**
 * main - Computes the sum of multiples of 3 or 5 below 1024 (excluded)
 *
 * Description:
 * This program calculates and prints the sum of all natural numbers that are
 * multiples of either 3 or 5, within the range of 0 to 1023. The result is
 * displayed followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int sum = 0;
int i;

for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);

return (0);
}

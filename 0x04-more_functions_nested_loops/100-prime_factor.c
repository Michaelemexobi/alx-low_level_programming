#include <stdio.h>
/**
 * main - Entry point of code prints the largest prime
 *        factor of the number 612852475143
 * Return: 0 Always scuccessful
 */
int main(void)
{
long number = 612852475143;
long i;

for (i = 2; i <= number; i++)
{
if (number % i == 0)
{
while (number % i == 0)
{
number = number / i;
}
}
}

printf("%ld\n", i - 1);

return (0);
}


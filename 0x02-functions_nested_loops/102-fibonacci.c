#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Description:
 * This program calculates and prints the first 50 Fibonacci numbers, starting
 * with 1 and 2. The numbers are separated by commas, followed by a space, and
 * the list is terminated with a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 50;
long long fib1 = 1, fib2 = 2, nextTerm;

printf("%lld, %lld\n", fib1, fib2);

for (int i = 3; i <= n; i++)
{
nextTerm = fib1 + fib2;
printf("%lld, ", nextTerm);
fib1 = fib2;
fib2 = nextTerm;
}

printf("\n");

return (0);
}

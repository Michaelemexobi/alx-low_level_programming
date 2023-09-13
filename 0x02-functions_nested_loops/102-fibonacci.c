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
int term1 = 1;
int term2 = 2;
int next;
int i;

printf("%d, ", term1);

for (i = 1; i < 50; i++)
{
printf("%d", term2);
next = term1 + term2;
term1 = term2;
term2 = next;
}

printf("\n");

return (0);
}

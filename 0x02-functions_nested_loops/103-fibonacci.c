#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 always successful
 */
int main(void)
{
int first = 1, second = 1, next, sum = 0;

while (next < 4000000)
{
next = first + second;
if (next % 2 == 0)
{
sum += next;
}
first = second;
second = next;
}

printf("%d\n", sum);

return (0);
}

#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 always successful
 */
int main(void)
{
unsigned long int first = 1, second = 1, next;
int i;

for (i = 0; i < 100; i++)
{
next = first + second;
printf("%lu, ", next);
first = second;
second = next;
if (i != 99)
printf(", ");
}

printf("\n");


return (0);
}

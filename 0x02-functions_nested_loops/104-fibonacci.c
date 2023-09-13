#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 always successful
 */
int main(void)
{
int first = 1, second = 1, next;
int i;

for (i = 0; i < 98; i++)
{
next = first + second;
printf("%d, ", next);
first = second;
second = next;
}

printf("\n");

return (0);
}

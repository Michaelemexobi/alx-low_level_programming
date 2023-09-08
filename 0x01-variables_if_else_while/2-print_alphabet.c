#include <stdio.h>
/**
 * main - Entry point of code
 * Return: 0 Always (successful)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

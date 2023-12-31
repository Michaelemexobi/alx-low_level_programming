#include <stdio.h>
#include <stdlib.h>

#define IS_DIGIT(c) (c >= '0' && c <= '9')

/**
 * main - Adds positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of pointers to strings containing the arguments.
 *
 * Return: 0 if successful, 1 if non-digit characters found.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!IS_DIGIT(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}


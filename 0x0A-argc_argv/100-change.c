#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins needed to make change.
 * @argc: Number of arguments.
 * @argv: Array of pointers to strings containing the arguments.
 *
 * Return: 0 if successful, 1 if incorrect number of arguments,
 * or if cents is negative.
 */
int main(int argc, char *argv[])
{
int cents, num_coins;
int coins[5] = {25, 10, 5, 2, 1};
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

num_coins = 0;

for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
num_coins++;
}
}

printf("%d\n", num_coins);

return (0);
}


#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table up to n
 * @n: The maximum value for the times table (0 to 15)
 */
void print_times_table(int n)
{
int i, j, product;

if (n < 0 || n > 15)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;

if (j == 0)
{
printf("%d", product);
}
else if (product < 10)
{
printf("   %d", product);
}
else if (product < 100)
{
printf("  %d", product);
}
else
{
printf(" %d", product);
}

if (j != n)
{
printf(",");
}
}
printf("\n");
}
}



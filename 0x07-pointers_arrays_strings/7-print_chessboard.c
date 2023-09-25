#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard represented
 * as an 8x8 array of characters.
 * @a: Pointer to an array representing the chessboard.
 *
 * Description: Each element of the array represents a cell on the chessboard.
 * The function will print the chessboard to the console.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
if (j != 7)
putchar(' ');
else
putchar('\n');
}
}
}


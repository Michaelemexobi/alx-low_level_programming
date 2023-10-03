#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments received, one per line.
 * @argc: Number of arguments.
 * @argv: Array of pointers to strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

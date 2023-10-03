#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: number of arguments (unused).
 * @argv: array of arguments.
 *
 * This program prints the name of the executable file. It takes an array of
 * arguments, but the argument count is not used in this case.
 *
 * Return: Always returns 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

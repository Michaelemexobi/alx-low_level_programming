#include <unistd.h>

/**
 * main - This function prints a specific message.
 * Return: Always 1 (indicating success).
 */
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}


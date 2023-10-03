#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of arguments.
 * @av: Array of pointers to strings containing the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL if ac == 0 or av == NULL
 * or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
int total_length, i, j, k;
char *result;

if (ac == 0 || av == NULL)
{
return (NULL);
}

total_length = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_length++;
}
total_length++;
}

result = (char *)malloc((total_length + 1) * sizeof(char));

if (result == NULL)
{
return (NULL);
}

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[k++] = av[i][j];
}
result[k++] = '\n';
}

result[k] = '\0';

return (result);
}

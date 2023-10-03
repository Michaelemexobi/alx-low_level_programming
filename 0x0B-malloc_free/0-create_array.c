#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 * @size: Size of the array.
 * @c: Character to initialize the array with.
 *
 * Return: Pointer to the created array, or NULL if size is 0
 * or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}

array = (char *)malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}


#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 *
 * @str: Pointer to the string to split.
 *
 * Return: Pointer to an array of strings (words).
 * Each element of this array should contain a single word, null-terminated.
 * The last element of the returned array should be NULL.
 * Words are separated by spaces.
 * Returns NULL if str == NULL or str == "".
 * If the function fails, it should return NULL.
 */
char **strtow(char *str)
{
char **words;
char *word;
int i;

if (str == NULL || str[0] == '\0')
{
return (NULL);
}

words = malloc(sizeof(char *) * (strlen(str) + 1));
if (words == NULL)
{
return (NULL);
}

i = 0;
word = (char *)strtok(str, " ");
while (word != NULL)
{
words[i] = word;
i++;
word = (char *)strtok(NULL, " ");
}

words[i] = NULL;

return (words);
}

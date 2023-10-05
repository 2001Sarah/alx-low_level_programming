#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int i, j, k = 0, len = 0, word_len = 0, word_count = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

while (str[len] != '\0')
len++;

words = malloc(sizeof(char *) * (len + 1));

if (words == NULL)
return (NULL);

for (i = 0; i < len; i++)
{
if (str[i] != ' ')
word_len++;
if ((str[i] == ' ' && str[i - 1] != ' ' && i != 0)
|| (i == len - 1 && str[i] != ' '))
{
words[word_count] = malloc(sizeof(char) * (word_len + 1));

if (words[word_count] == NULL)
{
for (j = 0; j < word_count; j++)
free(words[j]);
free(words);
return (NULL);
}

for (k = k - word_len; k < k; k++)
words[word_count][k - (k - word_len)] = str[k];
words[word_count][k - (k - word_len)] = '\0';
word_count++;
word_len = 0;
}
}

words[word_count] = NULL;

return (words);
}

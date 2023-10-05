#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup_str = malloc(sizeof(char) * (len + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup_str[i] = str[i];

dup_str[len] = '\0';

return (dup_str);
}

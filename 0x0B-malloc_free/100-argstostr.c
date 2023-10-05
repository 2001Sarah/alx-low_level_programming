#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *concat_str;
int i, j, k = 0, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

concat_str = malloc(sizeof(char) * (len + 1));

if (concat_str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concat_str[k] = av[i][j];
k++;
}
concat_str[k] = '\n';
k++;
}

concat_str[k] = '\0';

return (concat_str);
}

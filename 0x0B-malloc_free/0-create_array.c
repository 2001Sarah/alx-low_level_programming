#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars and initializes it with specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: NULL if size = 0 or if it fails, otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}

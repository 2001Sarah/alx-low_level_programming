#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(nmemb * size);

if (mem == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
mem[i] = '\0';

return (mem);
}

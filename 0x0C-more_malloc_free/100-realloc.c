#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc(old_size).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: If new_size == old_size - a pointer to the original memory block.
 *         If new_size == 0 and ptr != NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

return (new_ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

old_ptr = ptr;

for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return (new_ptr);
}

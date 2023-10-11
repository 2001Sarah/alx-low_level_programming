#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - Frees a dog
 * @d: Pointer to dog_t struct
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}

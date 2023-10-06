#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: If min > max or if malloc fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *arr, i;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));

if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}

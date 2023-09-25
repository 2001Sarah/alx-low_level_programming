#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to be set.
 * @to: The value to set.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
*s = to;
}

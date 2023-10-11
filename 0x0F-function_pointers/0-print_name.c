#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Pointer to function that prints a char
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

while (*name)
{
f(name);
name++;
}
}

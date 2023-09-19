#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints other string character starting with the first character
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}

putchar('\n');
}

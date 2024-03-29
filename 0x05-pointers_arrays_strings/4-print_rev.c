#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

for (len--; len >= 0; len--)
putchar(s[len]);

putchar('\n');
}

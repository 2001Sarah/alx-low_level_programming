#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int i;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}

putchar('\n');
}

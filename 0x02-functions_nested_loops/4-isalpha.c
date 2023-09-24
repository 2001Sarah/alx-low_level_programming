#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
return (_islower(c) || isupper(c));
}

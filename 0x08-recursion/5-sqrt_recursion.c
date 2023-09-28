#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: natural square root of n,or -1 if n doesn't have natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return ( _sqrt_helper( n, 1, n));
}

/**
 * _sqrt_helper - Recursive helper function for _sqrt_recursion.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: natural square root of n,or -1 if n doesn't have natural square root
 */
int _sqrt_helper(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = (start + end) / 2;
if (mid *mid == n)
return (mid);
if (mid *mid > n)
return ( _sqrt_helper( n, start , mid - 1));
return ( _sqrt_helper( n, mid + 1, end));
}
return (-1);
}

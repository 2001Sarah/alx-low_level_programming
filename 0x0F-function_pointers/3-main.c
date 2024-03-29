#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    result = num1 + num2;

    printf("%d\n", result);

    return (0);
}

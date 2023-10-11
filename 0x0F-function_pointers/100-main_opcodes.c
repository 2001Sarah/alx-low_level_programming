#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
int i, bytes;
char *main_ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

main_ptr = (char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02hhx", *(main_ptr + i));
if (i != bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}

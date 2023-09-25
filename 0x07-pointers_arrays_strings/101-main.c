#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
        FILE *file;
        char *password = "password123";

        file = fopen("password.txt", "w");
        if (file == NULL)
        {
                perror("Error opening file");
                return (1);
        }

        fprintf(file, "%s", password);
        fclose(file);

        return (0);
}

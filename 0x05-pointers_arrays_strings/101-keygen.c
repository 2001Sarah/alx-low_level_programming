#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int passwordLengt = 10;
char password[passwordLength + 1];

srand(time(NULL));

for (int i = 0; i < passwordLength; i++)
{
password[i] = rand() % 94 + 33;
}

password[passwordLength] = '\0';

printf("Generated password: %s\n", password);

return (0);
}

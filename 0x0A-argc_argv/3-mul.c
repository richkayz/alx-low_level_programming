#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if it works, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
	int n, m, multp;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		multp = n * m;

		printf("%i\n", multp);
	}
	return (0);
}

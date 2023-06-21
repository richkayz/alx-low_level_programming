#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)

{
	for(int x = 'A'; x <= 'Z'; x++)
{
    int lower_x = tolower(x);
    putchar(lower_x);
	putchar('\n');
}

	return (0);
}

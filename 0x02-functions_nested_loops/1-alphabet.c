#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a';alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');

	return (0);
}

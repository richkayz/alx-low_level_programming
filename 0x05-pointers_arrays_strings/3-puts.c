#include "main.h"

/**
 * _puts -a function that prints a string, followed plus new line
 *
 * @str: an input string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

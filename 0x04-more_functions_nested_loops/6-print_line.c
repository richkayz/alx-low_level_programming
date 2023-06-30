#include "main.h"
/**
 * print_diagonal - draw a straight line
 * @n: number of times the '_' char is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 *  print_last_digit - last digit
 *
 * @n: int to be print
 * Return: 0.
 */

int print_last_digit(int n)

{
	int last_digit;

	last_digit = n%10;
	_putchar(last_digit);
	return(last_digit);

}

#include "main.h"

/**
 *  print_last_digit - last digit
 *
 * @n: The int to print
 * Return: Always 0.
 */

int print_last_digit(int n)

{
	int last_digit;
	_putchar(last_digit = n % 10);
	return(last_digit);
}

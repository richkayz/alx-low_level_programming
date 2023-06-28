#include "main.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  print_last_digit - last digit
 *
 * @n: The int to print
 * Return: Always 0.
 */

int print_last_digit(int n)

{
	int lastDigit = n % 10;
	return lastDigit;
}

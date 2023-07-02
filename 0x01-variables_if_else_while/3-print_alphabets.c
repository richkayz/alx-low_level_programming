#include <stdio.h>

/**
 * main - Prints the alphabetic except e & q
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;
	
	while (c <= 'z')
	{
		if (c != 'q' || c != 'e')
		{

			putchar(c);
			c++;
		}
	}	
	putchar('\n');
	return (0);
}

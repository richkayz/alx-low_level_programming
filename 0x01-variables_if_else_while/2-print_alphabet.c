#include <stdio.h>

/**
 * main -Lower letters Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z'; letter++)
	{
		tolower (putchar(letter));
		
	}
	putchar('\n');
	
	return (0);
}


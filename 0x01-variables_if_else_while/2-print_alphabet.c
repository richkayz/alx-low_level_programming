#include <stdio.h>
#include <ctype.h>
/**
 * main -Lower letters Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar (tolower(letter));
		letter++;
		
	}
	putchar('\n');
	
	return (0);
}


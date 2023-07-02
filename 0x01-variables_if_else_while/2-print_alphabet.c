#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints a text according number
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		tolower (putchar('letter'));
		letter++; 
	}
	putchar('\n');
	
	return 0;
}

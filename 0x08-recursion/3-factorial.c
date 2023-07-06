#include "main.h"
/**
 * _factorial - print factorial of int n.
 * @n: the string to be printed
 *
 */
int main(void)
{
	int n = 0;
	   int  i;
	if (n < 0)
	{
		return(-1);
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			 n *= i;
			_putchar(n);
		}
		_putchar('\n');
	return(0);}
}

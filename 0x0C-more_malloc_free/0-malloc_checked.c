#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number to allocate memory for
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}

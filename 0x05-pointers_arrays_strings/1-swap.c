#include <stdio.h>

/**
 *1-swap.c - swaps the values of two integers
 *
 *swap_int: Swaps the two integers function
 *
 *@a: initial integer to be swapped
 *
 *@b: Integer to be swapped
 *
 *Return: 0
*/
void swap_int(int *a, int *b)
{

int temp;

temp = *a;
*a = *b;
*b = temp;

}

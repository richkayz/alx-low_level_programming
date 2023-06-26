#include <stdio.h>

/**
 *1-swap.c - swaps the values of two integers
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

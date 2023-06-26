#include <stdio.h>

/**
 *swap.c - swaps the values of two integers
 *
 *@a & @b: Integers to be swapped
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

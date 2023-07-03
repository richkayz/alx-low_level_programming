#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    // Write C code here
    int n;
    char i = 'a';
   
    for (n = 0; n <=9; n++)
    {
        putchar('0' + n);
    }
    while (i <= 'f')
    {
        putchar(i);
        i++;
    }
    return 0;
}

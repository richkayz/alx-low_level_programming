#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed
 */
int main(int argc, char *argv[]) {
    int sum = 0;

    // Start from argv[1] to skip the program name (argv[0])
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);

        if (num <= 0) {
            continue;
        }

        sum += num;
    }

    printf("Sum of positive numbers: %d\n", sum);

    return 0;

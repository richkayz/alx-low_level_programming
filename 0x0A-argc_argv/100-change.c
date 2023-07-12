#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers

 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Error" << std::endl;
        return 1;
    }

    int cents = std::atoi(argv[1]);

    if (cents < 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);

    int coinCount = 0;
    for (int i = 0; i < numCoins; i++) {
        coinCount += cents / coins[i];
        cents %= coins[i];
    }

    std::cout << coinCount << std::endl;
    return 0;
}

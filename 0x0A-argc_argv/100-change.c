#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make 
 * change for an amount of money
 * @argc: is a count of the arguments supplied to the program
 * @argv:  is an array of pointers to the strings which are those arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
    int amount, i, coinCount;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    amount = atoi(argv[1]);
    coinCount = 0;

    if (amount < 0)
    {
        printf("0\n");
        return (0);
    }

    for (i = 0; i < 5 && amount >= 0; i++)
    {
        while (amount >= coins[i])
        {
            coinCount++;
            amount -= coins[i];
        }
    }

    printf("%d\n", coinCount);
    return (0);
}

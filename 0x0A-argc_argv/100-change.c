#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    int cents = atoi(argv[1]);
    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    
    for (i = 0; i < num_coins; i++) {
        count += cents / coins[i];
        cents %= coins[i];
    }

    printf("%d\n", count);
    return 0;
}

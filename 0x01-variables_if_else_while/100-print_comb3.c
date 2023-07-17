#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int j;
    int sum;
    int t = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {   
            sum = i * 10 + j;
            if (sum % 10 == 0 && i > 0)
            {
                j = t;
                t++;
            }
            else
            {
                putchar('0' + i);
                putchar('0' + j);
                putchar(' ');
                if (sum != 89)
                putchar(','); 
            }
        }
    }

    putchar('\n');
    return (0);
}
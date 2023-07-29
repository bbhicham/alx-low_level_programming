#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum;
    int i, j;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (len1 > size_r - 1 || len2 > size_r - 1)
        return (0);

    len1--;
    len2--;
    r[size_r - 1] = '\0';

    for (i = size_r - 2; len1 >= 0 || len2 >= 0 || carry; i--, len1--, len2--)
    {
        sum = carry;
        if (len1 >= 0)
            sum += n1[len1] - '0';
        if (len2 >= 0)
            sum += n2[len2] - '0';

        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }

    i++; 

    if (i > 0 && i < size_r)
        return (r + i);
    else
        return (0); 
}

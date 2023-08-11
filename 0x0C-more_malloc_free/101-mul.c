#include <stdio.h>
#include <stdlib.h>

int _isdigit(char c)
{
    return c >= '0' && c <= '9';
}

int _strlen(char *s)
{
    int length = 0;

    for (; s[length] != '\0'; length++)
        ;

    return length;
}

char *_multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int total_len = len1 + len2;
    int *result = calloc(total_len, sizeof(int));
    int i, j;
    if (result == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    
    for (i = len1 - 1; i >= 0; i--)
        for (j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i + j + 1];

            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }

    char *product = malloc(total_len + 1);
    if (product == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < total_len; i++)
        product[i] = result[i] + '0';
    product[total_len] = '\0';

    free(result);

    return product;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++)
        if (!_isdigit(num1[i]))
        {
            printf("Error\n");
            return 98;
        }

    for (int i = 0; num2[i] != '\0'; i++)
        if (!_isdigit(num2[i]))
        {
            printf("Error\n");
            return 98;
        }

    if (num1[0] == '0' || num2[0] == '0')
    {
        printf("0\n");
        return 0;
    }

    char *product = _multiply(num1, num2);

    int i = 0;
    while (product[i] == '0')
        i++;

    if (product[i] == '\0')
        printf("0\n");
    else
        printf("%s\n", product + i);

    free(product);

    return 0;
}

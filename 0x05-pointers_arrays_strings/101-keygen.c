#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int password_length = 14;
    char password[password_length];
    srand(time(NULL));

    for (i = 0; i < password_length-1; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[password_length] = '\0';
    printf("%s", password);

    return 0;
}
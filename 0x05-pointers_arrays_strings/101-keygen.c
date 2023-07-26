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
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int password_length = 12;
    char password[password_length + 1];
    srand(time(NULL));

    for (int i = 0; i < password_length; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[password_length] = '\0';
    printf("%s\n", password);

    return 0;
}
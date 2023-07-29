#include "main.h"

/**
 * rot13 - tthat encodes a string into 1337.
 * @str: input String.
 *
 * Return: A pointer to the changed string.
 */
char *rot13(char *str) {
    char *result = str;

    while (*str) {
        char c = *str;

        if ((c >= 'a' && c <= 'z')) {
            *str = ((c - 'a' + 13) % 26) + 'a';
        } else if ((c >= 'A' && c <= 'Z')) {
            *str = ((c - 'A' + 13) % 26) + 'A';
        }

        str++;
    }

    return result;
}
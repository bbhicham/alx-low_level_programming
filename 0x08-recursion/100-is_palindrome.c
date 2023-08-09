#include "main.h"

/**
 * is_palindrome_recursive - Recursive helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index of the current comparison.
 * @end: The end index of the current comparison.
 *
 * Return: 1 if palindrome, 0 if not palindrome.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 *
 * Return: 1 if palindrome, 0 if not palindrome.
 */
int is_palindrome(char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;
    return is_palindrome_recursive(s, 0, length - 1);
}

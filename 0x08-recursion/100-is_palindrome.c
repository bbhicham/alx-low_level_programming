#include "main.h"

/**
 * string_length - Calculates the length of a string.
 * @s: The string to calculate the length for.
 *
 * Return: The length of the string.
 */
int string_length(char *s)
{
if (*s == '\0')
return (0);
return (1 + string_length(s + 1));
}

/**
 * is_palindrome_recursive - Check if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index of the current comparison.
 * @end: The end index of the current comparison.
 *
 * Return: 1 if palindrome, 0 if not palindrome.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 *
 * Return: 1 if palindrome, 0 if not palindrome.
 */
int is_palindrome(char *s)
{
int length = string_length(s);
return (is_palindrome_recursive(s, 0, length - 1));
}

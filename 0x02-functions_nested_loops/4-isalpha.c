#include "main.h"

/**
 * _isalpha - the character to be checked
 * @c: The character to checke
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

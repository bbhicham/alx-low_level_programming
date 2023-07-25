#include "main.h"
/**
 * _strlen - get lenght of string
 * @s: String input
 * Return: lenght of string
 */
int _strlen(char *s)
{
int c;
for (c = 0; *s != '\0'; s++)
{
++c;
}


return (c);
}

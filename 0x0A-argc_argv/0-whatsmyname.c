#include <stdio.h>

/**
 * main - Entry point
 * @argc: is a count of the arguments supplied to the program
 * @argv:  is an array of pointers to the strings which are those arguments
 * Description: A C program prints its name, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

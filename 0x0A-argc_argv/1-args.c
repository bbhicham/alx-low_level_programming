#include <stdio.h>

/**
 * main - Entry point
 * @argc: is a count of the arguments supplied to the program
 * @argv:  is an array of pointers to the strings which are those arguments
 * Description: A C program prints the number of arguments passed into it
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%d\n", argc - 1);

return (0);
}

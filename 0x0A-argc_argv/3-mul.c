#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: is a count of the arguments supplied to the program
 * @argv:  is an array of pointers to the strings which are those arguments
 * Description: A C program multiplies two numbers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

printf("%d\n", num1 * num2);
}

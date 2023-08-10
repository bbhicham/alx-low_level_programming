#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: is a count of the arguments supplied to the program
 * @argv:  is an array of pointers to the strings which are those arguments
 * Description: Print the result, followed by a new line
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
int num = 0;
int j = 0;

while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}

num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}

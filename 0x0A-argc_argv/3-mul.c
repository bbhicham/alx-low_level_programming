#include <stdio.h>
/**
 * _atoi -  function that convert a string to an integer
 *
 * @s: string pointed
 *
 * Return: integer convert from s
 */
int _atoi(char *s)
{
unsigned int num = 0;
int signe = 1;
int r;

do {
if (*s == '-')
{
signe *= -1;
}
else if (*s >= '0' && *s <= '9')
{

num = (num * 10) + (*s - '0');

}
else if (num > 0)
{
break;
}
} while (*s++);

r = num *signe;
return (r);
}

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

printf("%d\n", num1 *num2);
return (0);
}

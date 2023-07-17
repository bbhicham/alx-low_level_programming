#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program to print use write function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1,quote,59);
	return (1);
} 

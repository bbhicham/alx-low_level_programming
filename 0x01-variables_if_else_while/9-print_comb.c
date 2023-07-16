#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: A C program rints all possible comb of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

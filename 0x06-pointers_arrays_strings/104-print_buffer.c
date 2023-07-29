#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (j < size - i)
				printf("%02x", *(b + i + j));
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (j < size - i)
			{
				int c = *(b + i + j);

				if (c >= 32 && c <= 126) // Check for printable characters
					printf("%c", c);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}

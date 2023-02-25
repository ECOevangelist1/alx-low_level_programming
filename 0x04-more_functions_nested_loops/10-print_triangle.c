#include "main.h"

/**
 * print_traingle - a function that prints a triangle & a new line
 * @size: input interger
 * Return: Always 0
 */
void print_traingle(int size)
{
	int i, j, n = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}

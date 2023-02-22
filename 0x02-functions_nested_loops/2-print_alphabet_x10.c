#include "main.h"
#include "stdio.h"
/**
 * print_alphabet_10x - Funtion to print alphabets
 *
 * Return: int(0)
 */
void print_alphabet_10x(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - Print all alphabets in lowercaser 10 times.
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	char i;
	char k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

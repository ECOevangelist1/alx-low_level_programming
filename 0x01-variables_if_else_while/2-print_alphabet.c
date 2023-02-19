#include <stdio.h>
/**
 * main - Entry point
 *
 * print letters of the alphabet
 * Return: int(0)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

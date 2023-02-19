#include <stdio.h>
/**
 * main - main function entry
 *
 * print letter of the alphabet
 * Return: int(0)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

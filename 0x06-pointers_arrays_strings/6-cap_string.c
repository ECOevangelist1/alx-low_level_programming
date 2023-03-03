#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}';

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + 1) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i -1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}

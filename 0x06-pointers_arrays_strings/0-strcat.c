#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

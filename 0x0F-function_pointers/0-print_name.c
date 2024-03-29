#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: pointer to name to print
 * @f: function to print name
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

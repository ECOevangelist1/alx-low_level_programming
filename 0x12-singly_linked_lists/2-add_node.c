#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a node at the beginning of a list
 * @head: pointer to the head
 * @str: string to be added to the list
 * @Return: address of the new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lenght = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (strlength)
		length++;

	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

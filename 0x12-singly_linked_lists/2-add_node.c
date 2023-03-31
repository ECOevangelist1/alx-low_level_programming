#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the beginning of a list
 * @head: pointer to the head
 * @str: string to be added the list
 * @Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lenght = 0;

	new_node = malloc(sizeof(list_t));

	if (new node == NULL)
	{
		return (NULL);
	}
	while (str[length])
		length++;

	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

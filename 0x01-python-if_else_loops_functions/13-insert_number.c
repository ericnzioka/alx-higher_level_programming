#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a node into a sorted linked list
 * @head: Pointer to the first node.
 * @number: Number to be inserted.
 * Return: Pointer to new node, or NULL if it fails.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = number;

	if (*head == NULL || current->n >= number)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (current->next)
	{
		if (current->n <= number && current->next->n >= number)
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		current = current->next;
	}

	if (!current->next)
	{
		newnode->next = current->next;
		current->next = newnode;
	}

	return (newnode);
}
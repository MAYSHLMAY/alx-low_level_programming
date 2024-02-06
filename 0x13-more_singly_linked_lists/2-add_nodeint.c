#include "lists.h"
#include "stdlib.h"

/**
 * add_nodeint - adds a new node at the beginning.
 * @head: first node pointer.
 * n: value
 * Return: Integer.
 **/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t_ptr;

	t_ptr = malloc(sizeof(listint_t));

	if (t_ptr == NULL)
	{
		return (NULL);
	}

	t_ptr -> n = n;
	t_ptr -> next = *head;
	*head = t_ptr;
	return (*head);
}

#include "lists.h"
#include "stddef.h"

/**
 * print_listint - print number of nodes
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count += 1;
	}
	printf("%d\n", h->n);

	return (node_count);
}

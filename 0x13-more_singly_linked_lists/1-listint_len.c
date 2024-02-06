#include "lists.h"
#include "stddef.h"

/**
 * listint_len - print number of elements
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
	unsigned int ele_count = 0;
	const listint_t *t_ptr;

	if (h == NULL)
	{
		return (0);
	}
	t_ptr = h;

	while (t_ptr)
	{
		ele_count++;
		t_ptr = t_ptr->next;
	}

	return (ele_count);
}

#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * dlistint_t list
 * @h: a pointer that points to the first node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

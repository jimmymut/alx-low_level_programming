#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *of a dlistint_t linked list
 *
 * @head: head pointer of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *ptr;
	unsigned int i = 0;

	temp = *head;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr->next = temp->next;

				if (temp->next != NULL)
					temp->next->prev = ptr;
			}

			free(temp);
			return (1);
		}
		ptr = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}

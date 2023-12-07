include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: List head
 *
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current)
		size++, current = current->next;
	return (size);
}

#include "lists.h"
/**
 * Eseteselase Berhanu
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to linked listint_t list
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	if (h != NULL)
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}
	return (count);
}
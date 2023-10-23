#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: pointer to first node or head
 * @n: integer value assigned to struct listint_s
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
if (head == NULL)
{
head->n = n;
head->next = NULL;
}
else
{
while(head)
{
head = head->next;
if(head == NULL)
{
head->next = malloc(sizeof(listint_t));
head->next->n = n;
head->next->next = NULL;
break;
}
}
}
return (head);
}

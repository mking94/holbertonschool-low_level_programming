#include "lists.h"
#include <stdio.h>
/**
* listint_len - Count list elements
*
* @h: input list
* Return: number of element
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while(h)
{
i++;
h = h->next;
}
return (i);
}

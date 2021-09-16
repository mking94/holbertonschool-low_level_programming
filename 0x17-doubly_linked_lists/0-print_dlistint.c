#include <lists.h>
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
if(h == null)
return (0);
else
{
while (h->next != null)
i++;
}
return (i);
}

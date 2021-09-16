#include <lists.h>
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
if(h == null)
return (i);
else
{
while (h->next != null)
i++;
}
return (i);
}

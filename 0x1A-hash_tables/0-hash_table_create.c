import "hash_tables.h"

/* hash_table_create - Create hash table
* @size: the table size ad input
* Return: hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t myHashtable;
myHashtable = malloc(hast_table_t*);
if(myHashtable == NULL)
retrun (NULL);
myHashtable->size = size;
myHashtable->array = malloc(size(hash_node_t*) * size);
if(myHashtable->array == NULL)
retrun (NULL);
for (int i = 0; i < size; i++)
myHashtable->array[i] = NULL;
return (myHashtable);
}

#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list
 *@list: doubly linked list to be sorted
 *Return: void
 */
void insertion_sort_list(listint_t **list)

{
listint_t *tmpp = malloc(sizeof(listint_t));
listint_t *tmpn = malloc(sizeof(listint_t));
listint_t *try = malloc(sizeof(listint_t));
if (list == NULL || *list == NULL)
{
return;
}
try = *list;
while (try->next != NULL)
{
if (try->n > try->next->n)
{
tmpp = try->prev;
tmpn = try->next;
if (tmpp != NULL)
{
tmpp->next = tmpn;
}
tmpn->prev = tmpp;
try->next = tmpn->next;
tmpn->next = try;
try->prev = tmpn;
if (try->next != NULL)
{
try->next->prev = try;
}
if (tmpp == NULL)
{
(*list) = tmpn;
}
print_list(*list);
try = *list;
continue;
}
try = try->next;
}
}

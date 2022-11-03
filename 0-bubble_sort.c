#include "sort.h"

/**
 *
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)

{
size_t i, j;
int a;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[i] < array[j])
{
a = array[i];
array[i] = array[j];
array[j] = a;
print_array(array, size);
}
}
}
}

#include "sort.h"

/**
 *
 *
 *
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, k = 0;
int a;
for (i = 0; i < size - 1; i++)
{
a = array[i];
for (j = i; j < size; j++)
{
if (a > array[j])
{
a = array[j];
k = j;
}
}
array[k] = array[i];
array[i] = a;
print_array(array, size);
}
}

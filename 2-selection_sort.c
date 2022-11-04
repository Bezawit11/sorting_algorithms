#include "sort.h"

/**
 *
 *
 *
 */
void selection_sort(int *array, size_t size)

{
size_t i, j;
int a, b, k;
for (i = 0; i < size - 1; i++){
a = array[i];
for (j = i; j < size; j++)
{
if (array[i] > array[j])
{
if (array[j] < a)
{
a = array[j];
k = j;
}
}
}
array[k] = array[i];
array[i] = a;
if (i != k)
{
print_array(array, size);
}
}
}

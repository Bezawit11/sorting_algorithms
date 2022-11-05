#include "sort.h"

/**
 *
 *
 *
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, k = 0;
int a, b;
for (i = 0; i < size - 1; i++)
{
a = array[i];
b = 0;
for (j = i; j < size; j++)
{
if (a > array[j])
{
a = array[j];
k = j;
b = 1;
}
}
array[k] = array[i];
array[i] = a;
if (b != 0){
print_array(array, size);
}
}
}

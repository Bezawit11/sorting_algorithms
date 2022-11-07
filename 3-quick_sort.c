#include "sort.h"

/**
 *
 *
 *
 */
 void quick_sort(int *array, size_t size)

{
int a = size;
quick_sort_helper(array, 0, a - 1, a);
print_array(array, size);
}


/**
 *
 *
 *
 */
void quick_sort_helper(int *array, int low , int high, int size)

{
if (low >= high)
{
return;
}
int p = array[high];
int j = low, i, a;
for (i = low; i < high; i++)
{
if (array[i] <= p)
{
a = array[i];
array[i] = array[j];
array[j] = a;
j++;}
}
a = array[high];
array[high] = array[j];
array[j] = a;
print_array(array, size);
quick_sort_helper(array, low, j - 1, size);
quick_sort_helper(array, j + 1, high, size);
}

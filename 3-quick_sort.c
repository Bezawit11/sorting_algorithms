#include "sort.h"

/**
 *quick_sort - a function that sorts using the Quick sort algorithm
 *@array: array of integers to be sorted
 *@size: size of the array
 *Return: void
 */
void quick_sort(int *array, size_t size)

{
int a = size;
if (array == NULL)
{
return;
}
quick_sort_helper(array, 0, a - 1, a);
}

/**
 *quick_sort_helper - a recursive function that partitions an array and quick sorts
 *@array: array of integers to be sorted
 *@low: the lowest position
 *@high: the highest position
 *Return: void
 */
void quick_sort_helper(int *array, int low , int high, int size)

{
int p = array[high];
int j = low, i, a;
if (low >= high)
{
return;
}
for (i = low; i <= high; i++)
{
if (array[i] <= p)
{
a = array[i];
array[i] = array[j];
array[j] = a;
j++; 
if (j - 1 != i)
{
print_array(array, size);}
}
}
quick_sort_helper(array, low, j - 2, size);
quick_sort_helper(array, j, high, size);
}

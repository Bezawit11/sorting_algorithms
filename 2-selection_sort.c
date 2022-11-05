#include "sort.h"

/**
 *selection_sort - a function that sorts an array
 *@array: an array to be sorted
 *@size: size of the array
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, k = 0;
int a, b;
if (array == NULL)
{
return;
}
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
if (b != 0){
array[k] = array[i];
array[i] = a;
print_array(array, size);
}
}
}

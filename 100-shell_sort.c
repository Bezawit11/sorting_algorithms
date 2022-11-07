#include "sort.h"

/**
 *
 *
 *
 */
void shell_sort(int *array, size_t size)
{
int temp = array[i];
size_t j, i, interval;
for (interval = size / 2; interval > 0; interval /= 2) 
{
for (i = interval; i < size; i += 1) 
{
for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
{
array[j] = array[j - interval];
}
array[j] = temp;
}
}
}

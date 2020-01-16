#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @high: higher half of the array
 * @low: lower half of the array
 */

void print_array(const int *array, size_t low, size_t high)
{
unsigned int i;

if (!array)
{
return;
}
printf("Searching in array: ");
for (i = low; i < high; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
}

/**
 * binary_search - Function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: Value in array or -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t mid;

while (low <= high)
{
print_array(array, low, high);
mid = low + (high - low) / 2;

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] > value)
{
high = mid - 1;
}
else
{
low = mid + 1;
}
}
return (-1);
}

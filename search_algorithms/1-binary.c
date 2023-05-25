#include "search_algos.h"
#include <stdlib.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * binary_search - search a number in an array
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: return the index of the value if it's found to the array
 * return -1 if array is null or value isn't found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x = 0, low = 0, high = size - 1;
	int i = 0;

	while (array && low <= high)
	{
		if (i != 0)
			print_array(array + low, size / (2 * i));
		else
			print_array(array + low, size);
		x = (low + high) / 2;
		if (value > array[x])
			low = ++x;
		else if (value < array[x])
			high = --x;
		else
			return (x);
		i++;
	}
	return (-1);
}

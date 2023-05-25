#include "search_algos.h"

/**
 * linear_search - search a number in an array
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: return the index of the value if it's found to the array
 * return -1 if array is null or value isn't found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	return (-1);
}

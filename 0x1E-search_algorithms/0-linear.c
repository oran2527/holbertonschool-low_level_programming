#include "search_algos.h"

/**
 * linearhash_djb2 - hashes keys for hash table
 * @array: numbers.
 * @size: size of array
 * @value: value to search
 * Return: the id in the array when find value, if not -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

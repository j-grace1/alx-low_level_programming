#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * and passes elements to a function pointer
 * @array: array of integers of parameters
 * @size: size of the array
 * @action: function to be executed
 * using array parameters
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

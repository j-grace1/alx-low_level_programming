#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @array: array of integers of parameters
 * @size: size of the array
 * @action: function to be executed
 * using array parameters
 * 
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	int i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	} 
}

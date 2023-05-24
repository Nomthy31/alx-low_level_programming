#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: ........
 * @size: size of the array
 * @cmp: ..........
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}

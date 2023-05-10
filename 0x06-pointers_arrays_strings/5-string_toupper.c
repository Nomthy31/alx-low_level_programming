#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: string to be changed
 * Return: pointer to the changed string
 */

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}

#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the characher to be checked
 * Return: 1 for lowercase character, 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

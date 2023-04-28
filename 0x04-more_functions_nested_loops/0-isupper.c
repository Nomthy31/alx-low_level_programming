#include "main.h"

/**
 * _isupper - checks for capital letters
 * @a: character to be checked
 * Return: 1 if letter is capital or 0 for other
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

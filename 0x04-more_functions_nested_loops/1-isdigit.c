#include "main.h"

/**
 * _isdigit - checks for a digit
 * @a: character to be checked
 * Return: 1 if character is a digit, 0 for other
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

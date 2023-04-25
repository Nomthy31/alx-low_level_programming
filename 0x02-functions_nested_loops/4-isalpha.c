#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the character to be checked
 * Return: 1 if character is an alphabet else 0
 */

int _isalpha(int c)
{
	if ((c >= 64 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

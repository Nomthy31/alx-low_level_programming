#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: the string to be checked
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int x;
	int length = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		length++;
	}
	return (length);
}

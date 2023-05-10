#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the buffer storing the string copy
 * @src: the string source
 * @n: the max number of bytes to be copied from scr
 * Return: resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

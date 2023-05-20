#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: two concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int p = 0, q = 0, r = 0, x = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[p])
		p++;
	while (s2[q])
		q++;
	x = p + q;
	s = malloc((sizeof(char) * x) + 1);
	if (s == NULL)
		return (NULL);
	q = 0;
	while (r < x)
	{
		if (r <= p)
			s[r] = s1[r];
		if (r >= p)
		{
			s[r] = s2[q];
			q++;
		}
		r++;
	}
	s[r] = '\0';
	return (s);
}

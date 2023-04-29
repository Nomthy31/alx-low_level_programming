#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int x;
	long int p;

	x = 612852475143;
	for (p = 2; p <= x; p++)
	{
		if (x % p == 0)
		{
			x /= p;
			p--;
		}

	}
	printf("%ld\n", p);
	return (0);
}

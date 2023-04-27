#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	long y = 1;
	long z = 2;
	long sum = z;

	while (z + y < 4000000)
	{
		z += y;
		if (z % 2 == 0)
			sum += z;
		y = z - y;
		++x;
	}

	printf("%ld\n", sum);

	return (0);
}



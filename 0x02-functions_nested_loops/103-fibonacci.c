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

	while (x < 50)
	{
		if (x == 0)
		printf("%ld", y);
		else if (x == 1)
		printf("%ld", z);
		else
		{
			z += y;
			y = x - y;
			printf(", %ld", z);
		}
		x++;
	}
	printf("\n");

	return (0);
}


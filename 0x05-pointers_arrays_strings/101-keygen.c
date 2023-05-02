#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	char password[84];
	int i = 0, s = 0, df1, df2;

	srand(time(0));

	while (s < 2772)
	{
		password[i] = 33 + rand() % 94;
		s += password[i++];
	}
	password[i] = '\0';
	if (s != 2772)
	{
		df1 = (s - 2772) / 2;
		df2 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			df1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + df1))
			{
				password[i] -= df2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}

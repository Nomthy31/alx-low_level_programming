#include "main.h"

/**
 * jack_bauer - prints every minute of a day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int x;
	int y;
	int z;
	int p;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
			{
				for (z = 0; z <= 5; z++)
				{
					for (p = 0; p <= 9; p++)
					{
						_putchar(x + '0');
						_putchar(y + '0');
						_putchar(58);
						_putchar(z + '0');
						_putchar(p + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

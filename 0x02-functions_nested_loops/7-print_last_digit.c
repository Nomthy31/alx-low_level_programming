#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the character to be checked
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int la;

	la = n % 10;
	if (la < 0)
	{
		la = la * -1;
	}
	_putchar(la + '0');
	return (la);
}

#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: the length of the line
 */

void print_diagonal(int n)
{
	int column, space, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (column = 0; column < n; column++)
		{
			i = column - 1;

			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

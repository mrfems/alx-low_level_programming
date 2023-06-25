#include "main.h"

/**
 * print_square - entry point
 *
 * Description: Generate and prints square
 *@size: size of square
 * Return: void
 */

void print_square(int size)
{
	int rw, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rw = 1; rw <= size; rw++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

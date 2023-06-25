#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Generate and prints the numbers with _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, tens, units, row;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			tens = num / 10;
			units = num % 10;
			if (num > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}

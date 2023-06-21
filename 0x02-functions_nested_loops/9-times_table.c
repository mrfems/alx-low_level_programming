#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int number, counter, value;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (counter = 1; counter <= 9; counter++)
	{
		value = (number * counter);
	if ((value / 10) > 0)
	{
		_putchar((value / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((value % 10) + '0');

	if (counter < 9)
	{
		_putchar(',');
	      	_putchar(' ');
	}
	}
	_putchar('\n');
	}

}

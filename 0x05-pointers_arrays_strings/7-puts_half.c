#include "main.h"

/**
 * puts_half - Generates print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;

	counter++;
	for (counter /= 2; str[counter] != '\0'; counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}

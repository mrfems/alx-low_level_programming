#include "main.h"

/**
 * print_alphabet_x10 - function to Check Main
 * Description: function uses _putchar to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int number;

	for (number = 0; number < 10; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}

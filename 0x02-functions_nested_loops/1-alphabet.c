#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase, followed by a new line
 * Description: A program to general annd print a-z
 * Return: always success 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

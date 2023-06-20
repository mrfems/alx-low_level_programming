#include "main.h"

/**
 * Description: A program to general annd print a-z
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
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

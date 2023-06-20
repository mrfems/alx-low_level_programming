#include "main.h"

/**
 * Description: A program to general annd print a-z
 * print_alphabet: a function that prints the alphabet, in lowercase
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

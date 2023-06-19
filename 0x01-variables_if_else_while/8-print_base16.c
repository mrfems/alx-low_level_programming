#include <stdio.h>

/**
 * main - main block
 * Description: Generate and print all numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
	int base;
	char character;

	for (base = 48; base < 58; base++)
	{
		putchar(base);
	}
	for (character = 'a'; character < 'g'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

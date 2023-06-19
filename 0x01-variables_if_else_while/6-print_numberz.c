#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, using for loop from 0.
 * Return: 0
 */
int main(void)
{
	int base_10;

	for (base_10 = 48; base_10 < 58; base_10++)
	{
		putchar(base_10);
	}

	putchar('\n');
	return (0);
}

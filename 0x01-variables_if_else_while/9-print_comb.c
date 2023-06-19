#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * The umbers must be separated by commas and a space.
 * Return: 0
 */

int main(void)
{
	int combo;

	for (combo = 48; combo < 58; combo++)
	{
		putchar(combo);
		if (combo < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	
	putchar('\n');
	return (0);
}

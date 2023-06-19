#include <stdio.h>

/**
 * main - main block
 * Description: Generate print all possible combinations of two digits using putchar.
 * Numbers must be separated by commas and a space.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i < 56 || j < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

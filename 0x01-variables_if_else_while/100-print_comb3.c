#include <stdio.h>

/**
 * main - main block
 * Description: Generate print all possible combinations of two digits 
 * Numbers must be separated by commas and a space.
 * Return: 0
 */

int main(void)
{
	int numb1, numb2;

	for (numb1 = 48; numb1 < 58; numb1++)
	{
		for (numb2 = 49; numb2 < 58; numb2++)
		{
			if (numb2 > numb1)
			{
				putchar(numb1);
				putchar(numb2);
				if (numb1 < 56 || numb2 < 57)
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

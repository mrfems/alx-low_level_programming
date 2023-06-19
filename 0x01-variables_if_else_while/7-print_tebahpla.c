#include <stdio.h>

/**
 * main - main block
 * Description: Generate and print lowercase alphabet in reverse order.
 * Return: 0
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'z'; lower_case >= 'a'; lower_case--)
	{
		putchar(lower_case);
	}
	putchar('\n');
	return (0);	
}

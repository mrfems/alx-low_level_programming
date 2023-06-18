#include <stdio.h>
/**
 * main - main block
 * Description: Generate and print a-z/A-Z using putchar fx.
 * Return: 0
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}

	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return (0);
}

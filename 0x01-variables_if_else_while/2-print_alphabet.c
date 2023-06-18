#include <stdio.h>
/**
 * main - main block
 * Description: Generate and print alphabet in lowercase using putchar.
 * Return: 0
 */
int main(void)
{
	char letta;

	for (letta = 'a'; letta <= 'z'; letta++)
	{
		putchar(letta);
	
	}
	putchar('\n');

	return (0);
}

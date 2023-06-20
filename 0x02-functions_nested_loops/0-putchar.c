#include "main.h"
/**
 * main - Put all code in here
 * Return: always show as success value
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}

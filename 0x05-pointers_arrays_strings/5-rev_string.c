#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int counter = 0, i, j;
	char *txt, holder;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	txt = s;

	for (i = 0; i < (counter - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			holder = *(txt + j);
			*(txt + j) = *(txt + (j - 1));
			*(txt + (j - 1)) = holder;
		}
	}
}

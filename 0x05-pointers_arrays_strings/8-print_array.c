#include "main.h"
#include <stdio.h>

/**
 * print_array - Generates and prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int counter = 0;

	for (; counter < n; counter++)
	{
		printf("%d", *(a + counter));
		if (counter != (n - 1))
			printf(", ");
	}
	printf("\n");
}

#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int num1, num2, holder;

	for (num1 = 0; num1 < n - 1; num1++)
	{
		for (num2 = num1 + 1; num2 > 0; num2--)
		{
			holder = *(a + num2);
			*(a + num2) = *(a + (num2 - 1));
			*(a + (num2 - 1)) = holder;
		}
	}
}

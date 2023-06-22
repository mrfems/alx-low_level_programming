#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int num1, num2, num3, n1, n2, m1, m2;

	num2 = 1;
	num3 = 2;

	printf("%lu", num2);

	for (num1 = num1; num1 < 91; num1++)
	{
		printf(", %lu", num3);
		num3 = num3 + num2;
		num2 = num3 - num2;
	}

	n1 = num2 / 1000000000;
	n2 = num2 % 1000000000;
	m1 = num3 / 1000000000;
	m2 = num3 % 1000000000;

	for (num1 = 92; num1 < 99; ++num1)
	{
		printf(", %lu", m1 + (m2 / 1000000000));
		printf("%lu", m2 % 1000000000);
		m1 = m1 + n1;
		n1 = m1 - n1;
		m2 = m2 + n2;
		n2 = m2 - n2;
	}

	printf("\n");

	return (0);
}

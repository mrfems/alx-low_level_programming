#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int random_number = 0, counter = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (counter < 2772)
	{
		random_number = rand() % 128;
		if ((counter + random_number) > 2772)
			break;
		counter = counter + random_number;
		printf("%c", random_number);
	}
	printf("%c\n", (2772 - counter));
	return (0);
}

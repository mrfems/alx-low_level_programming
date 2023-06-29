#include "main.h"

/**
 * *_strcat - This function commutes srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int number;
	int joiner;

	number = 0;
	joiner = 0;

	while (dest[number] != '\0')
	{
		number++;
	}

	while (src[joiner] != '\0')
	{
		dest[number] = src[joiner];
		joiner++;
		number++;
	}

	dest[number] = '\0';
	return (dest);
}

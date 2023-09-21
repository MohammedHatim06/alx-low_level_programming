#include "main.h"

/**
 * _strcat - function that overwriting the terminating
 *
 * @dest: pointer to destintion input
 * @src: pointer to sourse input
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int x, x2;

	x = 0;

	while (dest[x])
		x++;

	for (x2 = 0; src[x2] ; x2++)

		dest[x++] = src[x2];

	return (dest);
}

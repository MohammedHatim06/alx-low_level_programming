#include "main.h"

/**
 * *_strcpy - copies the string pointer to by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointer to my pointer 'src' to
 * the baffer pointer to by 'dest'
 *
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];

	} while (src[i] != '\0');

	return (dest);

}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * @c: input for alpha
 *
 * Return: 1 if itis upper , 0 if not
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

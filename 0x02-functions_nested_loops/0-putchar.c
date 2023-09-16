#include "main.h"

/**
 * main - enter point
 *
 * description: prtnt _putchar using putchar prototype
 *
 * Return: return 0 (success0)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0 : ch < 8 : ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);

}


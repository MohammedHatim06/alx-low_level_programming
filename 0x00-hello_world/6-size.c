#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu Byte(s)", sizeof(char));
	printf("Size of an int: %lu Byte(s)", sizeof(int));
	printf("Size of a long int: %lu Byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu Byte(s)", sizeof(long long int));
	printf("Size of a float: %lu Byte(s)", sizeof(float));
	return (0);
}

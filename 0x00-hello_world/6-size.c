#include <stdio.h>

/**
 * main - entry point function
 * prints the siaze of various types on the host computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of a int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}

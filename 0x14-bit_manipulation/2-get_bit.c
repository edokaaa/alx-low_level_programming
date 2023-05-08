#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the number
 * @index: index of the bit to get
 *
 * Return: the value of the bit at index
 * or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	if (n & 01)
		return (1);
	else
		return (0);
}

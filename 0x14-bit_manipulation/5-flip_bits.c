#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * yout would need to flip to get from
 * one number to another
 * @n: the original number
 * @m: the number you want to flip to
 *
 * Return: number of flipped bits to m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		/* increment count if the least significant bit is 1 */
		if (diff & 1)
			count++;
		/* right shift diff to check the next bit */
		diff >>= 1;
	}
	return count;
}

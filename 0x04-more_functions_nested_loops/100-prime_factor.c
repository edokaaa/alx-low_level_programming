#include <stdio.h>
#include <stdlib.h>

/**
 * main - prime the largest prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
	long int n, i, j, largest;
	int is_prime;

	n = 612852475143;
	largest = 0;
	/* get prime factors */
	for (i = 2; i <= n; i++)
	{
		/* printf("getting-factors loop \n"); */
		if (n % i == 0)
		{
			/* check if i is prime */
			is_prime = 1;
			for (j = 2; j <= i; j++)
			{
				/* printf("inner forloop to check if number is prime \n"); */
				if (i % j == 0 &&  j != i)
				{
					/* printf("%d is divisible by %d, so it is not prime\n", i, j); */
					is_prime = 0;
					break;
				}
			}
			if (is_prime == 1)
			{
				/* printf("%ld is prime\n", i); */
				/* factor is prime */
				/* so we compare to the largest */
				if (i > largest)
				{
					/* printf("and is larger than %ld", largest); */
					largest = i;
				} else
					continue;
			}
			continue;
		}
	}
	printf("%ld\n", largest);
	return (0);
}

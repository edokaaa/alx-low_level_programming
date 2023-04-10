#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_change - minimum number of coins to make change for an amount of money.
 * using recursion
 * @n: the amount in cents
 *
 * Return: the number of change
*/
int get_change(int n)
{
	int i, count, max = 0;
	int arr[5] = {25, 10, 5, 2, 1}; /* the available coins value*/

	for (i = 0; i < 5; i++)
	{
		if (arr[i] == n)
			/*
			* base case for the resursion
			*/
			return (1);

		if (arr[i] < n)
		{
			/**
			 * the max specifies the maximum coin value
			 * for that particular input cent.
			*/
			max = arr[i];
			break;
		}
	}
	/**
	 * now we check how many of the max coin
	 * can be contained in the input cent using division
	*/
	count = n / max;

	if (n % max == 0)
		/**
		 * this makes sure we don't check for a 0 input cent
		 * and return the count instead as the input change count fits already.
		*/
		return (count);

	/**
	 * we run the function recursively
	 * passing the remainder from the division as the input cent
	*/
	return (count + get_change(n % max));
}

/**
 * main - prints the result of the get_change function
 * @argc: the argument count.
 * @argv: the array of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 1)
	{
		printf("0\n");
		return (0);
	}

	count = get_change(atoi(argv[1]));
	printf("%d\n", count);

	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * using malloc to create a 2 dimentional array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the array or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = 0;
	/* the reason for size_t is because each element in the array*/
	/* hold a pointer to an array */
	arr = (int **)malloc(height * sizeof(size_t));
	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		/* now we allocate space for the inner array */
		/* which will now hold the values*/
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			/* filling the array with 0s */
			*(arr[i] + j) = 0;
			j++;
		}
		free(arr[i]);
		i++;
	}
	return (arr);
}

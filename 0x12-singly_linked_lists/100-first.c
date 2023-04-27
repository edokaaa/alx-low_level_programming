#include "lists.h"
#include <stdio.h>

/**
 * exe_before_main - a function that executes before main
 *
 * Return: nothing
*/
void __attribute__ ((constructor)) exe_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

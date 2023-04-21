#include "function_pointers.h"

/**
 * print_name - a function that prints a name using function pointers.
 * @name: name to print
 * @f: pointer to function
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

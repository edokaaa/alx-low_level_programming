#ifndef MAIN_H
#define MAIN_H

typedef unsigned long size_t;
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */

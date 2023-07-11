#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));

typedef unsigned int size_t;

void array_iterator(int *array, size_t size, void (*action)(int));

#endif

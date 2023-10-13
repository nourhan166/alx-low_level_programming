#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the string name
 * @f: print function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
printf("print_name");
}

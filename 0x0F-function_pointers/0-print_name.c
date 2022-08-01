#include <stdio.h>
#include "function_pointers.h"
#include "main.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
_putchar("%s\n", name);
}

/**
 * print_name - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *)){
f = &print_name_as_is(char *name);
*f();
}

#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @list: A va_list containing the char to be printed.
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints an int.
 * @list: A va_list containing the int to be printed.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Prints a float.
 * @list: A va_list containing the float to be printed.
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Prints a string.
 * @list: A va_list containing the string to be printed.
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j;
	char *separator = "";

	op_t ops[]

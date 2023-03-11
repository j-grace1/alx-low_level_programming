#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 *
 * @valist: A va_list of arguments
 */
void print_char(va_list valist)
{
    printf("%c", va_arg(valist, int));
}

/**
 * print_int - Prints an integer
 *
 * @valist: A va_list of arguments
 */
void print_int(va_list valist)
{
    printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float
 *
 * @valist: A va_list of arguments
 */
void print_float(va_list valist)
{
    printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string
 *
 * @valist: A va_list of arguments
 */
void print_string(va_list valist)
{
    char *s = va_arg(valist, char *);

    if (s == NULL)
    {
        printf("(nil)");
        return;
    }

    printf("%s", s);
}

/**
 * print_all - Prints anything
 *
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list valist;
    int i = 0, j = 0;
    char *sep = "";

    print_fn print_arr[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {0, NULL}
    };

    va_start(valist, format);

    while (format && format[i])
    {
        j = 0;

        while (print_arr[j].type != 0)
        {
            if (format[i] == print_arr[j].type)
            {
                printf("%s", sep);
                print_arr[j].func(valist);
                sep = ", ";
                break;
            }

            j++;
        }

        i++;
    }

    va_end(valist);

    printf("\n");
}

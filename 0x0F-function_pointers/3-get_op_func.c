#include <stdio.h>
#include "calc.h"

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/**
 * get_op_func - returns the index of the first element
 * @char: array of integers
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;
    while (i != 0)
    {
       if(*s == ops[i].op)
       {
        return (ops[i].f);
       }
    }
    return (ops[i].f);
}

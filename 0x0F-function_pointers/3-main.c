#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - returns the answer of the operation 
 * appropriate expression
 * @num1: integer pointer
 * @operator: operator
 * @num2: integer pointer
 * Return: the answer of appropriate operation
 */

int main(char *num1,char *operator, char *num2)
{
    int ans, nu1, nu2;

    try
    {
    nu1 = atoi(num1);
    nu2 = atoi(num2);
    if (nu2 == 0 && *operator == ("/" || "%")) 
    {
        _putchar("Error\n");
       exit(100);
    }
    
    ans = get_op_func(operator))(num1, num2);

    if (ans == -1)
    {
        _putchar("Error\n");
        exit(99);
    }
    return (ans);
    }
    catch(ArgumentException)
    {
        _putchar("Error\n");
        exit(98);
    }
}

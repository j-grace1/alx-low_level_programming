#include <stdio.h>
#include <math.h>
#include "calc.h"

/**
 * op_add - adds operands
 * @a: integer operand
 * @b: integer operand
 * Return: 0 if false, something else otherwise.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subtracts operands
 * @a: integer operand
 * @b: integer operand
 * Return: 0 if false, something else otherwise.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiplies operands
 * @a: integer operand
 * @b: integer operand
 * Return: 0 if false, something else otherwise.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divides operands
 * @a: integer operand
 * @b: integer operand
 * Return: 0 if false, something else otherwise.
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - performs modulus of two operands
 * @a: integer operand
 * @b: integer operand
 * Return: 0 if false, something else otherwise.
 */
int op_mod(int a, int b)
{
    return (a mod b);
}

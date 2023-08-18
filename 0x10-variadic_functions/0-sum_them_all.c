#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @param_count: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If param_count == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int param_count, ...)
{
    va_list arguments;
    unsigned int i, sum = 0;

    va_start(arguments, param_count);

    for (i = 0; i < param_count; i++)
        sum += va_arg(arguments, int);

    va_end(arguments);

    return (sum);
}

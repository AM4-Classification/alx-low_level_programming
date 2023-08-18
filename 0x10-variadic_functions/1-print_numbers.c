#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @num_count: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int num_count, ...)
{
    va_list numbers;
    unsigned int i;

    va_start(numbers, num_count);

    for (i = 0; i < num_count; i++)
    {
        printf("%d", va_arg(numbers, int));

        if (i != (num_count - 1) && separator != NULL)
            printf("%s", separator);
    }

    printf("\n");

    va_end(numbers);
}

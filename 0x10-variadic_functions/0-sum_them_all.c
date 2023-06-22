#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
    va_list nums;
    int sum;

    if (n <= 0)
        return (0);
    va_start(nums, n);

    for (i = 0, sum = 0; i < n; i++)
    {
        sum += va_arg(nums, int);
    }

    va_end(nums);
    return (sum);
}

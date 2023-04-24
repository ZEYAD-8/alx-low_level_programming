#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers of the arguments.
 * 
 * Return: 0, when succes
 *         98, if arguments count not 3 besides the program name
 *         99, when supplied wrong operator
 *         100, division by zero
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(op)(num1, num2));

return (0);
}

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
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);
	char *forbid[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	forbid[0] = "/";
	forbid[1] = "%";

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL || argv[1][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (strcmp(argv[2], forbid[0]) || strcmp(argv[2], forbid[1])))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}


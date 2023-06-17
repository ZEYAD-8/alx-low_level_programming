#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds two numbers passed as arguments
 * @argc: The number of arguments.
 * @argv: The arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum, all_digit;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1, sum = 0, all_digit = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
			continue;
		}
		all_digit = 0;
	}
	if (all_digit)
	{
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}


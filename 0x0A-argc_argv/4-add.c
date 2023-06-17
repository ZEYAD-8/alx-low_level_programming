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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	if (*argv[1] >= '0' && *argv[1] <= '9')
	{
		if (*argv[2] >= '0' && *argv[2] <= '9')
		{
			for (i = 1, sum = 0; i < argc; i++)
			{
				sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}


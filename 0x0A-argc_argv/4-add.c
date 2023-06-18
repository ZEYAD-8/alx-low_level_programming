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
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1, sum = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


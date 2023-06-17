#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers passed as arguments
 * @argc: The number of arguments.
 * @argv: The arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}


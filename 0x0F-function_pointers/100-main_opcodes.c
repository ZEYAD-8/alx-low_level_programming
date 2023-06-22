#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0, (Success)
 *         1, argument count is not 1 besides the program name
 *         2, negative argument
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;


if (argc != 2)
{
printf("Error\n");
exit(1);
}


bytes = atoi(argv[1]);


if (bytes < 0)
{
printf("Error\n");
exit(2);
}


arr = (char *)main;


for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}


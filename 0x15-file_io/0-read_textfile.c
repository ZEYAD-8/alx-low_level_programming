#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the POSIX std output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead == 0 || ferror(file))
	{
		fclose(file);
		return (0);
	}

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWritten != bytesRead)
	{
		fclose(file);
		return (0);
	}

	fclose(file);
	return (bytesRead);
}

#include "main.h"

/**
* allocate_buffer - allocates memory.
* @filename: name of the file the buffer is storing characters.
* Return: a pointer to the allocated buffer.
*/

char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory for %s\n", filename);
		exit(99);
		/*EXIT_FAILURE*/
	}
	return (buffer);
}

/**
* main - copying content from one file to another.
* @argc: number of arguments passed .
* @argv: array of pointers to the arguments.
* Return: 0 .
*/

int main(int argc, char *argv[])
{
	int source_descriptor, destination_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		/*USAGE_ERROR*/
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	source_descriptor = open(argv[1], O_RDONLY);
	bytes_read = read(source_descriptor, buffer, 1024);
	destination_descriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_descriptor == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			/*READ_ERROR*/
			exit(98);
		}
		bytes_written = write(destination_descriptor, buffer, bytes_read);
		if (destination_descriptor == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			/*WRITE_ERROR*/
			exit(99);
		}
		bytes_read = read(source_descriptor, buffer, 1024);
		destination_descriptor = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);

	free(buffer);
	close_descriptor(source_descriptor);
	close_descriptor(destination_descriptor);

	return (0);
}

/**
* close_descriptor - close file descriptor.
* @fp: file descriptor to close .
*
* Return: void
*/

void close_descriptor(int fp)
{
	int result;

	result = close(fp);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fp);
		/*CLOSE_ERROR*/
		exit(100);
	}
}

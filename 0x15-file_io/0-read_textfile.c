#include"main.h"
/**
 * read_textfile-func to read texts from a file
 * @filename: pointer to a file
 * @letters:is the number of letters it should read and print
 * Return:actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *size;
	ssize_t fp;
	ssize_t pr, c;

	if (filename == NULL)
	{
		return (0);
	}
	/*opening a file*/
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	size = (char *) malloc(letters * sizeof(char));
	/*Reading from fp, space allocated and letters-what to read*/
	pr = read(fp, size, letters);

	c = write(STDOUT_FILENO, size, pr);

	free(size);

	close(fp);

	return (c);
}

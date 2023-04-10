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
	FILE *fp;
	ssize_t pr, c;

	if (filename == NULL)
	{
		return (0);
	}
	/*opening a file*/
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	size = (char *) malloc(letters * sizeof(char));
	if (size == NULL)
	{
		fclose(fp);
		return (0);
	}
	/*Reading from fp, space allocated and letters-what to read*/
	pr = fread(size, sizeof(char), letters, fp);
	if (pr == 0)
	{
		free(size);
		fclose(fp);
	}
	c = fwrite(size, sizeof(char), pr, stdout);
	if (c != pr)
	{
		free(size);
		fclose(fp);
		return (0);
	}
	free(size);

	fclose(fp);

	return (c);
}
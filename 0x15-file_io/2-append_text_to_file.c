#include"main.h"
/**
 * append_text_to_file-appends text at the end of a file
 * @filename: pointer to the file name
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int output;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		/*nothing to append*/
		return (1);
	}
	/*a -append at the end of the file*/
	fp = fopen(filename, "a");

	if (!fp)
	{
		/*file failed to open*/
		return (-1);
	}
	output = fputs(text_content, fp);
	fclose(fp);
	/* EOF- End of Line*/
	/*if output = EOF means an error occurred*/
	/*if output != EOF  means successfully written to the file*/
	if (output != EOF)
	{
		return (1);
	}
	return (1);
}

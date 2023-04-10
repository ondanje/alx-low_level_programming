#include"main.h"
/**
 * create_file-function that creates a file
 * @filename: pointer to the file
 * @text_content: content to be written in the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int len;
	int content;


	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}

	content = fwrite(text_content, 1, len, fp);

	if (content != len)
	{
		fclose(fp);
		return (-1);
	}
	}
	fclose(fp);
	return (1);
}

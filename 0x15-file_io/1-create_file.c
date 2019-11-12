#include "holberton.h"
/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: content for the file
 * Return: 1 if succeed if not -1
 **/
int create_file(const char *filename, char *text_content)
{
	int fp;
	size_t  i;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fp == '\0')
		return (-1);
	if (fp != '\0')
	{
		if (text_content != NULL)
		{
			for (i = 0; text_content[i] != '\0'; )
				i++;
			write(fp, text_content, i);
		}
		return (1);
	}
	close(fp);
	return (0);
}

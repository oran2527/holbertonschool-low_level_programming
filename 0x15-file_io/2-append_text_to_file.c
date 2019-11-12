#include "holberton.h"
/**
 * append_text_to_file - append text to a file
 * @filename: the name of the file
 * @text_content: content for the file
 * Return: 1 if succeed if not -1
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int ch, i;

	if (filename == NULL)
		return (-1);


	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	ch = fgetc(fp);
	while (ch != EOF)
	{
		ch = fgetc(fp);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; )
			i++;
		fputs(text_content, fp);
		return (1);
	}
	return (-1);
}

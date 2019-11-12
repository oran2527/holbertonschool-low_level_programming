#include "holberton.h"
/**
 * read_textfile - read a text file
 * @filename: the name of the file
 * @letters: number of letters
 * Return: number of letters
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t count = 0;
	char c;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == '\0')
		return (0);
	if (fp != '\0')
	{
		c = getc(fp);
		while (c != EOF && count < letters)
		{
			write(1, &c, 1);
			c = getc(fp);
			count++;
		}
		if (count != 0)
			return (count);
		if (count == 0)
			return (0);
	}
	fclose(fp);
	return (0);
}
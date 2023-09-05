#include "main.h"
/**
 * read_textfile - reads a text file and print to POSIX stdout
 * @filename: file name
 * @letters: number of letters to red and print
 * 
 * Return: number of letters read and printed or
 *         0 if filename is Null or if write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;


	if (filename != NULL)
	{
		fp = fopen(filename, "r");
		if (fp == NULL)
		{
			return (0);
		}
		else
		{
			write(1, fp, letters);
			return (write(1, fp, letters));
		}
	}
	else
	{
		return (0);
	}
}
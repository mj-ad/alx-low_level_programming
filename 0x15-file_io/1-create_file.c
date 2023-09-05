#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be written to the file
 * 
 * Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
    int fp;
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

    if (filename == NULL)
    {
        return (-1);
    }

    fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
    write(fp, text_content, strlen(text_content));
    return (1);
}
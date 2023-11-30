#include "main.h"
/**
 * create_file - function creates a file
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fildes;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);
	if (!text_content)
		text_content = " ";
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fildes, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fildes);
	return (1);
}

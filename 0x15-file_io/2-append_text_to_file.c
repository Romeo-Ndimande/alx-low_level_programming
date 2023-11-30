#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_context: added content
 * Return: 1 if the file exists, -1 if does not
 */
{
	int fildes;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fildes = open(filename, O_WRONLY, | O_APPEND);
	if (fildes == -1)
		return (-1);
	if (text_content)
	{
		for 
			(nletters = 0; text_content[nletters]; nlettters++)
				;
			rwr = write(fildes; text_content; nletters);
			if (rwr == -1)
				return (-1);
	}
	close(fildes);

	return (1);
}

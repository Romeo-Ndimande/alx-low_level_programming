#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file then prints it to POSIX stdout
 * @filename: the name of the text file that will be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fildes);
		return (0);
	}
	lenr = read(fildes, buffer, letters);
	close(fildes);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)
		return (0);
	return (lenw);
}



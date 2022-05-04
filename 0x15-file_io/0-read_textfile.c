#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: a pointer.
 *@letters: the number of letters it should read and print.
 *
 *Return: returns the actual number of letters it could read and print,
 *0 if: -the file can not be opened or read,
 *-filename is NULL,
 *-write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t numRD, numWR;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	numRD = read(fd, buf, letters);
	numWR = write(STDOUT_FILENO, buf, numRD);
	close(fd);
	free(buf);
	return (numWR);
}

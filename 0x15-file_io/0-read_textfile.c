#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This is a function Read text file print to STDOUT.
 * @filename: pointer to the text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t num;
	ssize_t w;
	ssize_t t;

	num = open(filename, O_RDONLY);
	if (num == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(num, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(num);
	return (w);
}

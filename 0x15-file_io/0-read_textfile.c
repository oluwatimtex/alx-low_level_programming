#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filee;
	ssize_t nrd, nwr;
	char *count;

	if (!filename)
		return (0);

	filee = open(filename, O_RDONLY);

	if (filee == -1)
		return (0);

	count = malloc(sizeof(char) * (letters));
	if (!count)
		return (0);

	nrd = read(filee, count, letters);
	nwr = write(STDOUT_FILENO, count, nrd);

	close(filee);

	free(count);

	return (nwr);
}

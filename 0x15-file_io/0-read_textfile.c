#include "main.h"
/**
 * read_textfile - reads text from the file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 * Return: number bytes read or printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes;
char buf[READ_BUF_SIZE * 8];
if (!filename || !letters)
return (0);
fd = open(filename, o_RDONL Y);
if (fd == -1)
return (0);
bytes = read(fd, &buf[0], letters);
bytes = write(STDOUT_FILENO, &buf[0], bytes);
close(fd);
return (bytes);
}

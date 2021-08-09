#include "holberton.h"
/**
 *read_textfile - a function that read text file and print on stdout
 *@filename: name of file
 *@letters: no of latters to be printed
 *Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t num_of_letters, ftable;
char *buff;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(letters));
if (!buff)
return (0);
ftable = read(fd, buff, letters);
if (ftable == -1)
return (0);
num_of_letters = write(STDOUT_FILENO, buff, ftable);
if (num_of_letters == -1 || ftable != num_of_letters)
return (0);
free(buff);
close(fd);
return (num_of_letters);
}

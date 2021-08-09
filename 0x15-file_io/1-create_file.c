#include "holberton.h"
/**
 *create_file - a function that create a file
 *@filename: name of file
 *@text_content: NULL terminated string
 *Return: int 1 on success
 */
int create_file(const char *filename, char *text_content)
{
int file, i, w_count;
if (!filename)
return (-1);
file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (file == -1)
return (-1);
if (text_content)
{
i = 0;
while (text_content[i])
i++;
w_count = write(file, text_content, i);
if (w_count == -1)
return (-1);
}
close(file);
return (1);
}

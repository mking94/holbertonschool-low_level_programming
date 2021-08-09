#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;

	size_t i = letters;

	fptr = fopen("/home/maher/Desktop/pass/c/test.txt", "r");

	if (fptr == NULL)
	{
		printf("Error! opening file");
		return (0);
	}
	while (letters != 0)
	{
		putchar(fgetc(fptr));
		i--;
	}
	fclose(fptr);

	return (i);
}

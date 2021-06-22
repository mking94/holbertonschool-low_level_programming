#define HOLBERTON_H
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar ((char)i);
}
_putchar ('\n');
}

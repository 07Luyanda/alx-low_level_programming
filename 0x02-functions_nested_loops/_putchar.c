#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The charecter to print
 *
 * Return: On success 1.
 * On erro, -1 is returned, and error is set appropriately.
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}

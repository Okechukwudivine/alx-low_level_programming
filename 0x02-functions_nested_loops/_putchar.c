#include "main.h"
/**
 * _putchar-prints char
 * @c: First operand
 *
 */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

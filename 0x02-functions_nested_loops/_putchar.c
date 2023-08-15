#include <unistd.h>
/**
 * _putchar - executes the C char to stdout.
 * @c: To print the chararcter
 * Return: Success 1.
 * On error, -1 is returned while error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

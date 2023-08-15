#include <unistd.h>
/**
 * _putchar - executes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
/**
 * this code above prints characters in lowercase format
 */
int main(void)
{
print_alphabet();
return (0);
}

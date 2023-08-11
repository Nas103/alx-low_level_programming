#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the l-case alphabet in reverse
 * followed by a newline.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}

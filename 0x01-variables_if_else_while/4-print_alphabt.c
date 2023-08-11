#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the l-case alphabet 'q' and 'e' followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}

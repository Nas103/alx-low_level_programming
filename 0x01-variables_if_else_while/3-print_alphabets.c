#include <stdio.h>
/**
 * main - C
 *
 *prints the l-case alphabet followed by the u-case and a newline.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}

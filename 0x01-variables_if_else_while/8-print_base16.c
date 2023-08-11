#include <stdio.h>
/**
 * main - Entry point
 *
 * prints numbers of base 16 in l-case followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
while (number < 10)
{
putchar(number + '0');
number++;
}
char letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}

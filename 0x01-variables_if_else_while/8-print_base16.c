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
int d;
char low;
for (d = '0'; d <= '9'; d++)
putchar(d);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}

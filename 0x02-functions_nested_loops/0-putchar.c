#include <unistd.h>
/**
 * main - initiating point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char text[] = "_putchar\n";
write(1, text, sizeof(text) - 1);
return (0);
}

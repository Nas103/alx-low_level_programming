#include <stdio.h>
/**
 * main - Code that executes various types
 *
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int i;
long int b;
long long int d;
float f;
printf("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n",(unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s)\n",(unsigned long)sizeof(b));
printf("Size of a long long int: %lu bytes(s)\n",(unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n",(unsigned long)sizeof(f));
return (0);
}

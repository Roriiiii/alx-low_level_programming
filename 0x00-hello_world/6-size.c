#include <stdio.h>
/**
 * main - a program that prints the input
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}

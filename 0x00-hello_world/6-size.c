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
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

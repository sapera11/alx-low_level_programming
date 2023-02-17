#include <stdio.h>
/**
 * main - A program that prints the size of various types of computer
 * Return 0 (Success)
 */
int main(void)
{ 
	char a;
	int  b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu 1 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long: %lu 1 byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu 1 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu 1 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
	

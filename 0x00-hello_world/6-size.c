#include <stdio.h>
/**
 * main - Print size
 * Return: return 0
 */

int main(void)
{
	char c;
	int i;           
	long int li;
	long long int lli;
	float f;
	
	printf("Size of a char: %s\n", sizeof(c));
	printf("Size of an int: %s\n", sizeof(i));
	printf("Size of a long int: %li\n", sizeof(li));
	printf("Size of a long long int: %lli\n", sizeof(lli));
	printf("Size of a float: %f\n", sizeof(f));	
	return (0);
}

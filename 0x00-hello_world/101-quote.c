#include<unistd.h>
/**
 * main - Print quote
 * Return: return 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar\n", 47);
	return (1);
}

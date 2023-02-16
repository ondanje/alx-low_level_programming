#include<stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %c byte\n", sizeof(char));
	printf("Size of int: %i bytes\n", sizeof(int));
	printf("Size of long int: %i bytes\n", sizeof(long int));
	printf("Size of long long int: %i bytes\n", sizeof(long long int));
	printf("Size of float: %f bytes\n", sizeof(float));
	return (0);
}

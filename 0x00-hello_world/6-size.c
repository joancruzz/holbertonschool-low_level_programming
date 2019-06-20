#include <stdio.h>

/**
*main - Program that prints size
*Return: 0
*/

int main(void)
{
int ia;
long int iia;
long long iiia;
float fa;
double da;
char ca;

printf("Size of a char: %ld byte(s)\n", sizeof(ca));
printf("Size of an int: %ld byte(s)\n", sizeof(ia));
printf("Size of a long int: %ld bytes(s)\n", sizeof(iia));
printf("Size of a long long int: %ld byte(s)\n", sizeof(iiia));
printf("Size of a float: %ld byte(s)\n", sizeof(fa));
return (0);
}

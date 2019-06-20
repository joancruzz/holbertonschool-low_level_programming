#include <stdio.h>

/**
*main - Print size of various types
*Return: 0 to exit
*/

int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char)); 
printf("Size of int: %lu byte(s)\n", sizeof(int)); 
printf("Size of long int: %lu bytes(s)\n", sizeof(long int)); 
printf("Size of long long int: %lu byte(s)\n", sizeof(long long int)); 
printf("Size of float: %lu byte(s)\n", sizeof(float));
return (0);
}

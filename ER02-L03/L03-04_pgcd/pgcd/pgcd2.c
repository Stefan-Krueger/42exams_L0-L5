#include <stdio.h>
#include <stdlib.h>
 
// Recursive function to return gcd of a and b
int pgcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
	   return b;
	if (b == 0)
	   return a;
 
	// base case
	if (a == b)
		return a;
 
	// a is greater
	if (a > b)
		return pgcd(a-b, b);
	return pgcd(a, b-a);
}
 
int	main(int argc, char **argv)
{
	signed int res = 0;
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = pgcd(a, b);
	}
	if (res != 0)
		printf("%d", res);
	printf("\n");
	return (0);
}

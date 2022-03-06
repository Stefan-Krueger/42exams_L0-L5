// argc ==2?, than...
// find str len
// using argv[1][i] first char: upper cae oder lower case? 
// if >= 65 && <= 90 -> + 32
// if >= 97 && <= 122 -X -32
// write...


#include <unistd.h>

int main(int argc, char **argv)
{
	int len = 0; 
	int i = 0;

	if ( argc == 2)
	{
		while (argv[1][len])
			len++;
		len--;
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				argv[1][i] += 32;
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				argv[1][i] -= 32;
			write (1, &argv[1][i++],1);
		}
	}
	write(1, "\n", 1);
	return(0);
}

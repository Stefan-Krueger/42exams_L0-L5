#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int len = 0;

	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		len--;
		while (i <= len)
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				j = (unsigned int)argv[1][i] - 64;
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				j = (unsigned int)argv[1][i] - 96;
			else 
				j = 1;
			while (j)
			{
				write (1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return(0);
}

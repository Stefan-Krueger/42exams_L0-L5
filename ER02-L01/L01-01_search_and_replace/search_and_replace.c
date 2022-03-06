#include <unistd.h>
#include <stdio.h>

// get commandline with arguments, are there 3 Args? if ye -> procede, if no prt newline ans end 
// get length of first argument
// while (str[i] search: is second arg part of first arg[i] -> replace by third arg i++, no only i++

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}


int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		while(i <= (ft_strlen(argv[1]) - 1))
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
		return(0);
	}
	write(1, "\n", 1);
	return(0);
}

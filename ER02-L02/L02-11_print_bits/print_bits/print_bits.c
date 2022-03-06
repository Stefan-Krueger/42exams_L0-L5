#include <unistd.h>
#include <stdio.h>

void	print_bits(char octet)
{
	int		bit = 7;
	int		nbr = (unsigned int)octet;
	char	c;

	while (bit >= 0)
	{
		c = (nbr & (1LL<<bit))? '1' : '0';
		write(1, &c, 1);
		bit--;
	}
}

int	main(void)
{
	int	i = 65;

	//while (i < 256)
	//{
		print_bits(i);
	//	write(1, "\n", 1);
	//	i++;
	//}
	return (0);
}

	/*
	1. Umwandeln char octet in int nubr
	2. wieviel bit? Hier 8 bit
	3. Vergleich nubr & 2^i >= 1, wenn ja, dann 1, sonst 0
	4. Durchlauf von vorne nach hinten und write (1, "1", 1) oder write (1, "0", 1)
	*/
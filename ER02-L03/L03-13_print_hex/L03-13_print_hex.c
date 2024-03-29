#include <unistd.h>

int		ft_atoi(char *s)
{
	int		sign;
	long	i = 0;	
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	sign = (*s == '-') ? -1 : 1;
	(*s == '-' || *s == '+') ? s++ : 0;
	while (*s >= '0' && *s <= '9')
		i = i * 10 + *s++ - '0';
	return ((int)i * sign);
}

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += (n < 10) ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}

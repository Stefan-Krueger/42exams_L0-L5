#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putposnbr(int n)
{
	if (n > 9)
		ft_putposnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_atoi_pos(char *s)
{
	int		i = 0;
	while (*s >= '0' && *s <= '9')
		i = i * 10 + *s++ - '0';
	return (i);
}

void	tab_mult(int n)
{
	int		i = 1;
	while (i < 10)
	{
		ft_putposnbr(i);
		write(1, " x ", 3);
		ft_putposnbr(n);
		write(1, " = ", 3);
		ft_putposnbr(i++ * n);
		write(1, "\n", 1);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi_pos(av[1]));
	else
		write(1, "\n", 1);
}

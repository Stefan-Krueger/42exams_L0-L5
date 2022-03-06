#include <unistd.h>

void	rstr_capitalizer(char *s)
{
	int		i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == '\t' || s[i + 1] == ' ' || s[i + 1] == '\0'))
			s[i] -= 32;
		i++;
	}
	write(1, s, i);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		i = 1;
	if (ac > 1)
	{
		while (ac > i)
		{
			rstr_capitalizer(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}

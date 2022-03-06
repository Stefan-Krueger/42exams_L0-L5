#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0, len =0;
	char c;

	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strrev(av[1]));
	return (0);
}

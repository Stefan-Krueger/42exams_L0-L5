#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	if (!str)
		str = "(null)";
	while (str[i])
		write(1, &str[i++], 1);
	return;
}

int main(void)
{
	char string[] = {"Hello World"};

	ft_putstr(string);
	return(0);
}

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	if (!str)
		write(1, "\n", 1);
	while (str[i])
		i++;
	i--;
	while (str[i])
		write(1, &str[i--], 1);
	return(str);
}

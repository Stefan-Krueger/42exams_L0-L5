#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

signed int		pgcd(char *s1, char *s2)
{
	signed int	res1 = 0;
	signed int	res2 = 0;
	int			denom = 1;
	int			result = 1;

	res1 = atoi(s1);
	res2 = atoi(s2);
	while (denom < (res1 / 2) || denom < (res2 / 2))
	{
		if(res1 % denom == 0 && res2 % denom == 0)
			result = denom;
		denom++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	signed int res = 0;

	if (argc == 3)
		res = pgcd(argv[1], argv[2]);
	if (res != 0)
		printf("%d", res);
	printf("\n");
	return (0);
}

#include <unistd.h>

int main(int argc, char **argv)
{
	int used[255] = {0};
	int i, j;
	char c;

	if (argc == 3)
	{
		i = 2;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				c = (unsigned char)argv[i][j];
				if (i == 2 && !used[c])
					used[c] = 1;
				else if (i == 1 && used[c] == 1)
				{
					write(1, &argv[i][j], 1);
					used[c] = 2;
				}
				j++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

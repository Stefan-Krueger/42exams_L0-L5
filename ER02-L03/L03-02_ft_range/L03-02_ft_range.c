#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*s;
	int		len = (max >= min) ? max - min : min - max;
	if (!(s = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	while (max != min)
		*s++ = (max >= min) ? min++ : min--;
	*s = min;
	return (s - len);
}

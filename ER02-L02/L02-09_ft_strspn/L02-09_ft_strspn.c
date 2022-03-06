#include <stdio.h>

char			*ft_strchr(const char *str, int firstc)
{
	while (*str)
	{
		if (*str == (char)firstc)
			return ((char *)str);
		str++;
	}
	if (*str == (char)firstc)
		return ((char *)str);
	return (NULL);
}

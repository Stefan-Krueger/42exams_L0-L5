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

size_t			ft_strcspn(const char *s, const char *reject)
{
	size_t ret;

	ret = 0;
	while (*s)
	{
		if (ft_strchr(reject, *s))
			return (ret);
		else
		{
			s++;
			ret++;
		}
	}
	return (ret);
}

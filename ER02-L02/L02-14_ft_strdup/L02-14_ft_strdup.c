#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *str;
	int len;
	int index;
	
	len = 0;
	index = 0;
	if (src == NULL)
		return (NULL);
	while (src[len])
		len++;
	str = (char *)malloc(sizeof((char) len + 1));
	if (str == NULL)
		return (NULL);
	while (src[index])
	{
		str[index] = src[index];
		index++;
	}
	str[index] = '\0';
	return ((char *)str);
}

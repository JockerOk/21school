#include "libft.h"

char	*ft_strchr(const char *str, int sym)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sym)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == '\0' && sym == '\0')
		return ((char *)str + i);
	return (NULL);
}

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	char			*pointer;
	unsigned int	i;

	i = 0;
	pointer = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == sym)
			pointer = (char *)str + i;
		i++;
	}
	if (pointer == NULL)
		if (str[i] == '\0' && sym == '\0')
			return ((char *)str + i);
	return (pointer);
}

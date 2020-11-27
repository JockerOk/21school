#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*s;
	unsigned int	i;

	if (!(s = malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[j] != '\0' && j < len)
	{
		if (big[j] == little[0])
		{
			i = 1;
			while (little[i] != '\0' && big[j + i] == little[i] &&
				(j + i) < len)
				i++;
			if (little[i] == '\0')
				return ((char *)(big + j));
		}
		j++;
	}
	return (NULL);
}

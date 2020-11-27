#include "libft.h"

void	*ft_memchr(const void *src, int val, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char*)src;
	while (n > i)
	{
		if (str[i] == val)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char	*str2;
	unsigned char		*str1;
	size_t				i;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n > i)
	{
		str1[i] = str2[i];
		if (str2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

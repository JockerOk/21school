#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	unsigned const char	*str2;
	size_t				i;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	while (n > i)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}

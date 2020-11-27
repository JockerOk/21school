#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *str;

	if (!(str = (unsigned char *)malloc(size * count)))
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}

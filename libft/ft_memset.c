#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned int	i;
	char			*s;

	s = (char *)memptr;
	i = 0;
	while (num-- > 0)
		s[i++] = (char)val;
	return (memptr);
}

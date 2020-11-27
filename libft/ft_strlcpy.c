#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	cnt;

	cnt = 0;
	while (src[cnt] != '\0')
		cnt++;
	if (!size)
		return (cnt);
	i = 0;
	while (src[i] != '\0' && (size - 1) > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (cnt);
}

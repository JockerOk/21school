#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= size)
		return (srclen + size);
	i = 0;
	while (dst[i] != '\0' && (size - 1) > i)
		i++;
	j = 0;
	while (src[j] != '\0' && (size - 1) > i)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dstlen + srclen);
}

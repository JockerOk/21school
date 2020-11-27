#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;
	int		i;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1);
	while (s1[i - 1] && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	if (start >= end)
		return (ft_strdup(""));
	if (!(result = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}

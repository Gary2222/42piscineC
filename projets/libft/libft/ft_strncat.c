#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	j = ft_strlen(dest);
	k = ft_strlen(src);
	while (++i < k && i < n)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}

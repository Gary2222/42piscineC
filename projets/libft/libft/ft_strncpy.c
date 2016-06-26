#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

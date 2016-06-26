#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

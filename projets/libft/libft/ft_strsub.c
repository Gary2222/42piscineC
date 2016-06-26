#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	j = 0;
	if (ft_strlen(s) < start || !s)
		return (NULL);
	if (!(new = (char*)malloc(len + 1)))
		return (NULL);
	while (j < len && s[start])
		new[j++] = s[start++];
	new[j] = '\0';
	return (new);
}

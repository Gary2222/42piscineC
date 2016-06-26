#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	j;

	j = -1;
	while (str[++j])
		;
	return (j);
}

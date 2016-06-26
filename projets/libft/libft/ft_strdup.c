#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*temp;

	if ((temp = (char*)malloc((ft_strlen(str) + 1))) == NULL)
		return (NULL);
	ft_strcpy(temp, str);
	return (temp);
}

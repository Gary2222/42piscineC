#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *newstr;

	if ((newstr = (char*)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	ft_strclr(newstr);
	return (newstr);
}

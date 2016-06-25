#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = (void*)malloc(size)) == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return ((void*)mem);
}

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	
	*alst = ft_lstlast(new);
	}

#include "libft.h"

t_list	*ft_lstlast(t_lst *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*new_lst;
	t_list	*save;
	void	*new_content;

	save = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(&save, del);
			return (0);
		}
		ft_lstadd_back(&save, new_lst);
		lst = lst->next;
	}
	return (save);
}

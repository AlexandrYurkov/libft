#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*node;

	node = lst;
	while (node)
	{
		f(node);
		node = lst->next;
		lst = node;
	}
}

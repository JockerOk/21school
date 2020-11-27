#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (lst && new)
	{
		if (*lst == NULL)
		{
			*lst = new;
			return ;
		}
		temp = ft_lstlast(*lst);
		new->next = temp->next;
		temp->next = new;
	}
}

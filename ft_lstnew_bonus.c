#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	new_node = (struct s_list *)malloc(sizeof(struct s_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
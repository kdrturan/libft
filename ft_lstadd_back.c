#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list* now;
    now = *lst;
    while (now -> next)
        now = now -> next;
    now -> next = new;
}
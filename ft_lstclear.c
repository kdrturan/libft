#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list* now;
    t_list* delete;

    if (!*lst)
        return;
    delete = *lst;
    now = *lst -> next;
    while (now)
    {
        del(delete -> content);
        free(delete);
        delete = now;
        now = now -> next;
    }
}
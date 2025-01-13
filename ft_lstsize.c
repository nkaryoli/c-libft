#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *current;
    int size;

    current = lst;
    size = 0;
    while (current != NULL)
    {
        current = current -> next;
        size++;
    }
    return (size);
}
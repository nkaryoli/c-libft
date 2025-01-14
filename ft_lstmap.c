#include "libft.h"

void *duplicate_string(void *content)
{
    char *original = (char *)content;
    return (ft_strdup(original));
}

void del_string(void *content)
{
    free(content);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list *new_nodo;

    if (!lst)
        return (NULL);
    new_lst = NULL;
    while (lst)
    {
        new_nodo = ft_lstnew((*f)(lst -> content));
        if (!new_nodo)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_nodo);
        lst = lst -> next;
    }
    return (new_lst);
}

int main(void)
{
    t_list *o_lst = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_back(&o_lst, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&o_lst, ft_lstnew(ft_strdup("Node 3")));

    t_list *new_list = ft_lstmap(o_lst, duplicate_string, del_string);
    t_list *temp = o_lst;
    printf("Original List:\n");
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    temp = new_list;
    printf("New List:\n");
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    ft_lstclear(&o_lst, del_string);
    ft_lstclear(&new_list, del_string);

    return (0);
}
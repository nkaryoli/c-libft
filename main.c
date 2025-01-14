/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:37:17 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/07 20:15:05 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//test01: ft_isalpha.c 
//	ft_isdigit.c
//	ft_isalnum.c
//	ft_putnbr_fd.c
//	ft_putendl.c

void	test_01(int c)
{
	char	*y;
	char	*z;
	char	*e;
	char	*f;

	y = " es una letra";
	z = " es un numero";
	e = " no es alfanumerico";
	f = " no es imprimible";
	ft_putnbr_fd(c, 1);
	if (ft_isalpha(c) == 1)
		ft_putendl_fd(y, 1);
	if (ft_isdigit(c) == 1)
		ft_putendl_fd(z, 1);
	if (ft_isalnum(c) == 0)
		ft_putendl_fd(e, 1);
	if (ft_isascii(c) == 0)
	{
		ft_putnbr_fd(c, 1);
		ft_putendl_fd(f, 1);
	}
}

void *duplicate_string(void *content)
{
    char *original = (char *)content;
    return (ft_strdup(original));
}

void del_string(void *content)
{
    free(content);
}

int	main(void)
{
	int		c1;
	int		c2;
	int		fd;
	char	nl;
	char	c;

	c1 = 98;
	c2 = 66;
	fd = 1;
	nl = '\n';
	c1 = ft_toupper(c1);
	c = c1;
	ft_putchar_fd(c, fd);
	ft_putchar_fd(nl, fd);
	c2 = ft_tolower(c2);
	c = c2;
	ft_putchar_fd(c,fd);
	ft_putchar_fd(nl, fd);
	test_01(48);
	test_01(97);
	test_01(34);
	test_01(128);

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
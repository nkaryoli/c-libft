/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:24:07 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/16 18:31:55 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_ptr(char const *s1, char const *set)
{
	char	*result;

	result = NULL;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
	}
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set || *s1 == '\0')
	{
		result = check_ptr(s1, set);
		return (result);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, len + 1);
	return (result);
}

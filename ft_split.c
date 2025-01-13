/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:17:25 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/07 16:40:36 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_memory(char **res, int n)
{
	while (n > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

static size_t	count_substr(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*substring(const char *s, char c, size_t n)
{
	char	*res;
	char	start;
	size_t	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		count++;
		while (s[i] != c)
			i++;
		if (count == n && i > start)
		{
			res = (char *)malloc((i - start + 1) * sizeof(char));
			if (!res)
				return (NULL);
			ft_strlcpy(res, s + start, i - start + 1);
		}
	}
	return (res);
}

char	**split(const char *s, char c)
{
	const		**result;
	size_t		count;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	count = count_substr(s, c);
	result = (char **)malloc((count +1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < count)
	{
		if (i == count - 1)
			result[i] = '\0';
		else
		{
			result[i] = substring(s, c, i);
			if (!result)
				free_memmory(result, i);
		}
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:17:25 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/16 15:55:57 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_memmory(char **res, int n)
{
	while (n > 0)
	{
		n--;
		free(res[n]);
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
		if (*s)
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
	size_t	start;
	size_t	word;
	size_t	i;

	res = NULL;
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		word++;
		while (s[i] && s[i] != c)
			i++;
		if (word == n && i > start)
		{
			res = (char *)malloc((i - start + 1) * sizeof(char));
			if (!res)
				return (NULL);
			ft_strlcpy(res, s + start, i - start + 1);
		}
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	count;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	count = count_substr(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < count)
	{
		result[i] = substring(s, c, i + 1);
		if (!result[i])
		{
			free_memmory(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

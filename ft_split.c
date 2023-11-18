/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:45:34 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/14 19:02:44 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*fill_words(const char *s, char c, size_t *i)
{
	size_t	k;
	size_t	start;
	size_t	len;
	char	*copy;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	k = 0;
	while (*i - start > k)
	{
		copy[k] = s[start + k];
		k++;
	}
	copy[k] = '\0';
	return (copy);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			free(s[i]);
			i++;
		}
		free(s);
	}
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	k;
	size_t	i;
	char	**res;
	size_t	wc;

	if (!s)
		return (NULL);
	wc = countwords(s, c);
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	k = 0;
	i = 0;
	while (wc > k)
	{
		res[k] = fill_words(s, c, &i);
		if (!res[k])
			return (ft_free(res));
		k++;
	}
	res[wc] = (NULL);
	return (res);
}

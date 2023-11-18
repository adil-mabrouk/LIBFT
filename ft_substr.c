/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:14:12 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/17 14:46:32 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*my_alloc(const char *s, size_t len)
{
	size_t	lenght;
	char	*ptr;
	size_t	i;

	lenght = ft_strlen(s);
	if (lenght > len)
		ptr = malloc(sizeof(char) * (len + 1));
	else
		ptr = malloc(sizeof(char) * (lenght + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*copy;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start < s_len)
		return (my_alloc(&s[start], len));
	else
	{
		copy = malloc(sizeof(char) * 1);
		if (!copy)
			return (NULL);
		copy[0] = '\0';
		return (copy);
	}
}

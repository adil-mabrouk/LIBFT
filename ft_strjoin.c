/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:04:36 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/17 12:38:27 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	lenght;
	char	*copy;

	if (!s1 || !s2)
		return (NULL);
	lenght = ft_strlen(s1) + ft_strlen(s2);
	copy = malloc(sizeof(char) * lenght + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (ft_strlen(s1) > i)
	{
		copy[i] = s1[i];
		i++;
	}
	j = 0;
	while (lenght > i)
	{
		copy[i] = s2[j++];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

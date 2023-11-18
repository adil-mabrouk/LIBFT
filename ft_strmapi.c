/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:26:10 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/17 12:59:19 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*cp;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	cp = (char *)malloc(sizeof(char) * (len + 1));
	if (!cp)
		return (NULL);
	while (len > i)
	{
		cp[i] = f(i, s[i]);
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:45:44 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/17 12:02:18 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (count * size > i)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

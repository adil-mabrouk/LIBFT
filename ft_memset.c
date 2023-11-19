/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:12:06 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/17 22:17:46 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	unsigned char	cc;
	size_t			f;

	f = 0;
	bb = (unsigned char *)b;
	cc = (unsigned char)c;
	while (len > f)
	{
		bb[f++] = cc;
	}
	return (b);
}

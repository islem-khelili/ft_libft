/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhelili <ikhelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:59:46 by ikhelili          #+#    #+#             */
/*   Updated: 2024/10/19 18:37:57 by ikhelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*str_src;

	i = 0;
	if (!dest && !src)
		return (NULL);
	str = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	while (i < n)
	{
		str[i] = str_src[i];
		i++;
	}
	return (dest);
}

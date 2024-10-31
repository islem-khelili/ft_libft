/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhelili <ikhelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:03:57 by ikhelili          #+#    #+#             */
/*   Updated: 2024/10/18 19:37:57 by ikhelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = 1 ;
	while (n != 0)
	{
		n /= 10 ;
		len++;
	}
	return (len);
}

static void	fill_number(char *s, int n, int len, int is_negative)
{
	if (is_negative)
		n = -n;
	while (len > 0)
	{
		s[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		is_negative;

	is_negative = (n < 0);
	if (n == -2147483648)
	{
		s = (char *)malloc(12 * sizeof(char));
		if (!s)
			return (NULL);
		ft_strlcpy(s, "-2147483648", 12);
		return (s);
	}
	len = get_number_len(n);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	fill_number(s, n, len, is_negative);
	return (s);
}

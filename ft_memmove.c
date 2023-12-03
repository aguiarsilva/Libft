/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:26:58 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/01 14:00:17 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*s1;
	const unsigned char		*s2;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (!s1 || !s2)
		return (NULL);
	if (s2 < s1)
	{
		while (n > 0)
		{
			s1[n - 1] = s2[n - 1];
			n--;
		}
	}
	else if (s1 < s2)
		ft_memcpy(dest, src, n);
	return (dest);
}

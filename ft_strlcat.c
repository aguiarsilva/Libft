/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:36:01 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/02 14:09:30 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	r;

	i = 0;
	while (*dest && (i < n))
	{
		++dest;
		++i;
	}
	r = ft_strlcpy(dest, src, n - i);
		return (r + i);
}

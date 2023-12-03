/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:25:51 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/01 13:45:04 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			    len;
	unsigned char		*ptr;

	len = 0;
	ptr = (unsigned char *)s;
	while (len < n)
	{
		ptr[len] = 0;
		len ++;
	}
}

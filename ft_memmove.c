/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:26:58 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/05 14:27:21 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			    *s1;
	const char		*s2;
  size_t        i;

  if(dest == NULL && src == NULL)
    return (NULL);
	s1 = dest;
	s2 = src;
	if (s2 < s1)
	{
      i = n;
      while (n > 0)
      {
        s1[i - 1] = s2[i - 1];
        i--;
		}
	}
	else if (s1 < s2)
		ft_memcpy(s1, s2, n);
	return (dest);
}

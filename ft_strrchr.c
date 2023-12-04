/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:47:12 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 16:17:04 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int         i;
    const char	*ptr;

    ptr = s;
    i = ft_strlen(s);
    s = (s + i);
    while (*s != *ptr && c != *s)
    {
      s--;
    }
    if (c == *s)
		  return ((char *)s);
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:42:31 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 14:15:41 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    char	*ptr;

    ptr = (char *)s;
	  while (*ptr != c)
	  {
	  	if (*ptr == '\0')
		  	return (NULL);
		  ptr++;
	  }
	  return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:42:31 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 14:21:56 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
        char  *ptr;

        ptr = (char *)s;
	      while (*ptr != '\0')
	      {
	  	    if (*ptr == c)
		  	    return ((char *)ptr);
		      ptr++;
	      }
	      return (0);
}

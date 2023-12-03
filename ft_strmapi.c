/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:49:46 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 00:06:43 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char  *str;
  unsigned int  i;

  str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
  if(!str || !f)
    return (0);
  i = 0;
  while (i < ft_strlen(s))
  {
    str[i] = (*f)(i, str[i]);
    i++;
  }
  str[i] = '\0';
  return (str);
}

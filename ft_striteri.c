/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 00:07:20 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 00:13:56 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  unsigned int  i;

  i = 0;
  while (s[i])
  {
    (*f)(i, &s[i]);
    i++;
  }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:15:03 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 18:23:31 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_numlen(long n)
{
        size_t  i;

        i = 0;
        while(n)
        {
            n /= 10;
            i++;
        }
        return (i);
}

char  *ft_itoa(int n)
{
  char    *str;
  long    num;
  size_t  numlen;
  size_t  sinal;

  num = n;
  numlen = n > 0 ? 0 : 1;
  num = num > 0 ? num : -num;
  sinal = n > 0 ? 1 : 0;
  numlen += ft_numlen(n);
  str = (char *)malloc(sizeof(char) * (numlen + 1));
  if(!str)
    return (0);
  *(str + numlen--) = '\0';
  while (num > 0)
  {
    *(str + numlen--) = num % 10 + '0';
    num /= 10;
  }
  if (numlen == 0 && str[1] == '\0')
  {
    *(str + numlen) = '0';
  } 
  else if (numlen == 0 && sinal == 0)
  {
    *(str + numlen) = '-';
  }
  return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:15:03 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/05 12:03:43 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_charconv(char *s, unsigned int num, long int len)
{
  while (num > 0)
  {
    s[len--] = 48 + (number % 10);
    num = num / 10;
  }
  return (s);
}

static long int ft_numlen(int n)
{
        int  i;

        i = 0;
        if (n <= 0)
          i = 1;
        while(n)
        {
            i++;
            n /= 10;
        }
        return (i);
}

char  *ft_itoa(int n)
{
  char          *str;
  unsigned int  num;
  long int      numlen;
  int           sinal;

  numlen = ft_len(n);
  sinal = 1;
  str = (char *)malloc(sizeof(char) * (len + 1));
  if(!(str))
    return (NULL);
  s[numlen--] = '\0';
  if (n == 0)
    s[0] = '0';
  if (n < 0)
  {
    sinal *= -1;
    num = n * -1;
    s[0] = '-';
  }
  else
    num = n;
  str = ft_charconv(str, num, numlen);
  return (str);
}

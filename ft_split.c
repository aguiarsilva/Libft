/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:19:48 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/05 11:20:03 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	i;
	int	fword;	

	fword = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && fword == 0)
		{
			fword = 1;
			i++;
		}
		else if (*s == c)
			fword = 0;
		s++;
	}
	return (i);
}

static char	*cp_word(const char *str, int beg, int end)
{
	char	*mot;
	int		i;

	i = 0;
	mot = malloc((end - beg)* sizeof(char));
	while (beg < end)
		mot[i++] = str[beg++];
	mot[i] = '\0';
	return (mot);
}


char	**ft_split(const char *s, char c)
{
  char    **newstr;
  size_t  i;
  size_t  j;
  int  idx;
  
  if(!s || !(newstr = malloc((ft_word_count(s, c) + 1) * sizeof(char *))));
    return (0);
  i = 0;
  j = 0;
  idx = -1;
  while (i <= ft_strlen(s))
  {
    if (s[i] != c && idx < 0)
      idx = 1;
    else if ((s[i] == c || i == ft_strlen(s)) && idx >= 0)
    {
      newstr[j++] = cp_word(s, idx, i);
      idx = -1;
    }
    i++;
  }
  newstr[j] = 0;
  return (newstr);
}

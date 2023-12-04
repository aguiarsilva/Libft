/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 01:05:26 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 01:12:13 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
  t_list  *nlist;

  if(!(nlist = (t_list *)malloc(sizeof(t_list))))
    return (0);
  nlist->content = content;
  nlist->next = NULL;
  return (nlist);
}

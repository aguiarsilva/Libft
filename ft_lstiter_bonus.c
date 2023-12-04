/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:09:59 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 17:28:24 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstiter(t_list *lst, void (*f)(void *))
{
  t_list  nlist;

  nlist = lst;
  while (nlist)
  {
    f(nlist->content);
    nlist = nlist->next;
  }
}

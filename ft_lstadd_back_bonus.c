/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:20:48 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 12:53:17 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  last;

  last = ft_lstlast(*lst);
  if(!new)
    return ;
  if(!*lst)
  {
    *lst = new;
    return ;
  }
  last->next = new;

}

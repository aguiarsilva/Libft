/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:32:02 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 17:56:45 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
      t_list    *nlist;
      t_list    *nnode;

      nlist = 0;
      nnode = ft_lstnew(f(lst->content));
      if (!lst || !f || !del)
          return (NULL);
      while (lst)
      {
          if (!nnode)
          {
              ft_lstclear(&nlist, del);
              return (0);
          }
          ft_lstaddback(&nlist, nnode);
          lst = lst->next;
      }
      return (nlist);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:54:41 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/04 17:06:19 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *nlst;

    if (!del || !lst || !*lst)
            return ;
    while (lst && *lst)
    {
        nlst = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = nlst;
    }
}

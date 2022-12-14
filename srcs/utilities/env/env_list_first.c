/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_list_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 04:01:43 by fnichola          #+#    #+#             */
/*   Updated: 2022/10/13 05:36:57 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_envlist	*env_list_first(t_envlist *ptr)
{
	while (ptr && ptr->prev)
		ptr = ptr->prev;
	return (ptr);
}

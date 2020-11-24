/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_export.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:39:48 by pcatrina          #+#    #+#             */
/*   Updated: 2020/11/24 11:39:50 by pcatrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void       print_exp_list(t_list **env_dup)
{
	t_list *tmp;
	t_env  *env;
	tmp = *env_dup;
	while (tmp)
	{
		env = tmp->content;
		if (is_first_symbol(env->env_name, '_') == -1)
		{
			ft_putstr_fd("declare -x ", 1);
			ft_putstr_fd((env->env_name), 1);
			ft_putstr_fd("=\"", 1);
			ft_putstr_fd((env->env_cont), 1);
			ft_putstr_fd("\"\n", 1);
		}
		tmp = tmp->next;
	}
}

void	env_export(t_data *data)
{
	t_list	*new_list;

	new_list = list_dup_sort(&data->env);
	print_exp_list(&new_list);
	ft_lstclear(&new_list, (void*)free_memory);
}

int		is_first_symbol(const char *str, char c)
{
	if (!str)
		return (-1);
	else if (str[0] == c)
		return (0);
	return (-1);
}
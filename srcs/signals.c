/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatrina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:58:25 by pcatrina          #+#    #+#             */
/*   Updated: 2020/11/26 16:58:27 by pcatrina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	sig_quit()
{
	int	exit_status;

	if ((exit_status = process_status()) == -1)
		return ;
	else if(exit_status == 131)
		write(2, "Quit: 3\n", 8);
}

static void	sig_int()
{
	sigint_flag = 1;
	exit(EXIT_FAILURE);
}

void		signal_oper(void)
{
	signal(SIGQUIT, sig_quit);
	signal(SIGINT, sig_int);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:37:16 by pcatapan          #+#    #+#             */
/*   Updated: 2022/12/05 17:00:05 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

void	ft_exit(t_token *token)
{
	int	i;
	int	num;

	i = 0;
	while (token->value[i])
		i++;
	if (i > 2)
	{
		g_exit = 1;
		printf("Exit\n");
		perror(RED ERROR_EXIT COLOR_RES);
	}
	else if (token->value[1] == NULL)
	{
		printf(RED "\texit\n" COLOR_RES);
		ft_free_token(token);
		exit(0);
	}
	else
	{
		num = ft_atoi(token->value[1]);
		printf(RED "\texit\n" COLOR_RES);
		ft_free_token(token);
		exit(num);
	}
}

void	ft_exit_or(t_token *token)
{
	if (token->res == 0)
	{
		if (token->next)
		{
			if (token->and)
				;
		}
	}
	else
		ft_exit(token);
}

void	ft_check_exit(t_token *token)
{
	if (token->prev)
	{
		if (token->prev->or)
			ft_exit_or(token);
		else if (token->prev->and)
		{
			if (token->res)
				exit (1);
			else
				ft_exit(token);
		}
		else
			ft_exit(token);
	}
	else
		ft_exit(token);
}

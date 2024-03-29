/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:10:34 by pcatapan          #+#    #+#             */
/*   Updated: 2022/12/05 17:02:23 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

/**
 * @brief Check if the char is num or alpha
 * 
 * @param c Char to check
 * @return 1 if the char is valid, 0 isn't valid
 */
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) \
		|| c == 61)
		return (1);
	else
		return (0);
}

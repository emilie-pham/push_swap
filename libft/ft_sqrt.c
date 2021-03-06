/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epham <epham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:49:47 by epham             #+#    #+#             */
/*   Updated: 2019/07/08 12:21:56 by epham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while ((i * i) < (nb) && (i <= 46340))
		i++;
	return (i);
}

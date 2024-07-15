/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:04:10 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/11 20:04:38 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	n;

	n = nb;
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (1);
	index = 2;
	while (index * index <= n)
	{
		if (index * index == n)
			return (index);
		index++;
	}
	return (0);
}

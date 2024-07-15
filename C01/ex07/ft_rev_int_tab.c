/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:26:32 by maelmahf          #+#    #+#             */
/*   Updated: 2024/06/28 21:35:32 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tpv;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tpv = tab[i];
		tab[i] = tab[j];
		tab[j] = tpv;
		i++;
		j--;
	}
}

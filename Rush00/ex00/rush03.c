/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:28:39 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 20:28:41 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printing(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
		ft_putchar('A');
	else if ((j == y && i == x) || (i == x && j == 1))
		ft_putchar('C');
	else if (i == 1 || i == x || j == y || j == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i ;
	int	j ;

	j = 1 ;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			i = 1 ;
			while (i <= x)
			{
				ft_printing(i, j, x, y);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
	else
		write(1, "No Commint", 10);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:28:20 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 20:28:28 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchr(char c);

void	rush(int x, int y);

int	ft_number(char *str)
{
	int	i ;
	int	s ;
	int	l ;

	i = 0 ;
	l = 0 ;
	s = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = l * 10 + str[i] - '0' ;
		i++;
	}
	return (l * s);
}

int	main(int ac, char **av)
{
	int	i ;
	int	j ;
	(void)ac;
	i = ft_number(av[1]);
	j = ft_number(av[2]);
	
	rush(i, j);
}

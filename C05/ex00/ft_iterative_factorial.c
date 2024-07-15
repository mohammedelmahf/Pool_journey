/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:39:55 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/14 09:55:43 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	
		result *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int number = 0;
	int result = ft_iterative_factorial(number);
	printf("Factorial of %d is %d", number, result);

	return (0);
}*/

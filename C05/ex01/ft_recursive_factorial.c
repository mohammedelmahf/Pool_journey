/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:54:00 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/14 09:55:15 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*#include<stdio.h>

int	main(void)
{
	int number = 5;
	int result = ft_recursive_factorial(number);
	printf("Factorial of %d is %d", number, result);

	return (0);
}*/

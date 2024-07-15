/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:57:02 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/03 14:16:03 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>
#include <string.h>


int main ()
{
	char	dest[] = "elmahfoudi";

	char  src [] = "mohammed";
	ft_strcat(dest , src);
	printf("smyti : %s\n", dest );
//	printf("symtiiiii : %s", strcat(dest , src ));
	return (0);
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 21:54:41 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 12:07:52 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int    ft_strlen(char *c)
{
    unsigned int    i;

    i = 0;
    while (c[i])
    {
        i++;
    }
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    x;

    x = ft_strlen(src);
    i = 0;
    if (size != 0)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (x);
}

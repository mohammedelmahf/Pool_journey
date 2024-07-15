/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:15:48 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 12:16:00 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_isprintable(char *string)
{
    int    i;

    i = 0;
    while (string[i])
    {
        if (string[i] >= 32 && string[i] <= 126)
        {
            ft_putchar(string[i]);
        }
        i++;
    }
}

void    ft_putstr_non_printable(char *str)
{
    int                i;
    int                j;
    int                k;
    char            *hexa;
    unsigned char    c;

    i = 0;
    hexa = "0123456789abcdef";
    while (str[i])
    {
        c = str[i];
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            j = c / 16;
            k = c % 16;
            ft_putchar('\\');
            ft_putchar(hexa[j]);
            ft_putchar(hexa[k]);
        }
        else
            ft_putchar(str[i]);
        i++;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:59:38 by sleon             #+#    #+#             */
/*   Updated: 2022/02/17 15:14:07 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len_dest;
    unsigned int    len_src;

    i = -1;
    len_src = ft_strlen(src);
    len_dest = ft_strlen(dest);
    if ((size < len_dest +1))
        return (len_src + size);
    if (size >= len_dest + 1)
    {
        while (src[++i] && len_dest + i + 1 < size)
            dest[len_dest + i] = src[i];
    }
    dest[len_dest + i] = '\0';
    return (len_dest + len_src);
}

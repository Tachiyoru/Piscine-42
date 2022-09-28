/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:57:25 by sleon             #+#    #+#             */
/*   Updated: 2022/02/24 21:24:49 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_split(char *str)
{
	int     count;
	int     i;
	i = 0;
	count = 1;
	while (str[i])
	{
		while (str[i] && str[i] != '\n' && str[i] != 32 && str[i] != '\t')
			i++;
		while (str[i] || str[i] == '\n' || str[i] == 32 || str[i] == '\t')
			i++;
		if (str[i - 1] || str[i - 1] == '\n' || str[i - 1] == 32 || str[i - 1] == '\t')
			count++;
	}
	return (count);
}		


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	issep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i++])
			return (1);
	}
	return (0);
}

char	*ft_strndup(char *src, int size)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc (sizeof (char) * size + 1);
	if (dup == NULL)
		return (0);
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	split = malloc (sizeof (char *) * (count_split(str)));
	j = 0;
	while (issep(*str, charset))
		str++;
	while (*str)
	{
		i = 0;
		while (!(issep(*str, charset)) && *str)
		{	
			str++;
			i++;
		}
		if (i > 0)
			split[j++] = ft_strndup ((str - i), i);
		str++;
	}
	split[j] = '\0';
	return (split);
}

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}

int		main(void)
{
	char **tab;

	tab = ft_split("Ceci&est$un##############################################################################################################################################################succes@!", "&$#@");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "CUT");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("", "");
	printf("OK\n");
	tab = ft_split("", "CUT");
	printf("OK\n");
	tab = ft_split("       ", "       ");
	printf("OK\n");
	tab = ft_split("         ", "       ");
	printf("OK\n");
}

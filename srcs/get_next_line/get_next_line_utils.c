/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:10:30 by mmaila            #+#    #+#             */
/*   Updated: 2023/12/15 17:20:18 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	newline(char *buf)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	size;
	int		i;

	if (!s1)
		return (NULL);
	size = ft_strlen(s1) + 1;
	cpy = malloc(size);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strsplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/03 12:16:54 by ael-kadh          #+#    #+#             */
/*   Updated: 2014/05/03 12:16:55 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_malloc.h"
#include "script.h"

static size_t	ft_strlenws(char const *s, char c)
{
	size_t		result;

	result = 0;
	while (*s != c && *s)
	{
		result++;
		s++;
	}
	return (result);
}

static char		**ft_spliting(char const *s, char **newt, char c)
{
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			newt[x++] = m_strsub(s, i, ft_strlenws(&s[i], c));
			i = i + ft_strlenws(&s[i], c);
		}
		else
			i++;
	}
	return (newt);
}

char			**m_strsplit(char const *s, char c)
{
	int		i;
	int		t;
	char	**newtab;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && ((i != 0 && s[i - 1] == c) || i == 0))
			t++;
		i++;
	}
	newtab = (char**)(ft_malloc(sizeof(newtab) * (t + 1)));
	if (newtab == NULL)
		return (NULL);
	while (t != -1)
		newtab[t--] = '\0';
	newtab = ft_spliting(s, newtab, c);
	return (newtab);
}

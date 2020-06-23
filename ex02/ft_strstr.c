/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:21:57 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/23 10:57:37 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	char 	*a;
	char	*b;
	if (*to_find  == '\0')
		return (str);
	while(*str != '\0')
	{
		a = str ;
		b = to_find;
		while(*b == *str)
		{
			++str;
			++b;
		}
		if (*b == '\0')
			return (a);
		str = a +1;
	}
	return ((char *)0);

}

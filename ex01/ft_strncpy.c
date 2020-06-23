/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:05:41 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/23 10:14:17 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;
	num = 0;
	while ( num < n && src[num] != '\0')

	{
		dest[1] = src[1];
		num++;
	}
	while (num < n)
		dest[num+1] = '\0';
	return (dest);
}

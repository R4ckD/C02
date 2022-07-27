/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:18:03 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/27 20:20:27 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned	int a = 4;
	char	dest[15] = "Warm Beer";
	char	orig[15] = "Cold Beer";

	printf("%s\n", dest);
	ft_strncpy(dest, orig, a);
	printf("%s\n", dest);
}*/

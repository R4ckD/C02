/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:13:57 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/27 00:10:47 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}	
int	main(void)
{
	char	*a;
	char	*b;
	int 	i;

	i = 0;
	a = 0;
	b = "Copiando un String!";
	while (b[i] != '\0')
	{
		printf(b[i]);
		i++;
	}
	ft_strcpy(
}

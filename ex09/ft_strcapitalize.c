/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:05:05 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/28 00:19:32 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90) && (str[i] >= 65))
			str[i] = str[i] + 32
			i++;
		else if (str[i] == 32)
			i++;
			
	}
	return (str);
}

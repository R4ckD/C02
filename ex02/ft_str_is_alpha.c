/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:21:43 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/27 21:56:12 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90) && (str[i] >= 65))
			i++;
		else if ((str[i] <= 122) && (str[i] >= 97))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	prueba[15] = "String alpha";
	char	test[5] = "es42";
	char    text[7];

	ft_str_is_alpha(test);
}
*/

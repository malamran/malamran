/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malamran <malamran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:20:28 by malamran          #+#    #+#             */
/*   Updated: 2024/07/03 11:30:38 by malamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

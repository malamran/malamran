/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malamran <malamran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:09:48 by malamran          #+#    #+#             */
/*   Updated: 2024/07/01 10:18:43 by malamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	left;
	int	right;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}

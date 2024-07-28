/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadikog <asadikog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:47:23 by asadikog          #+#    #+#             */
/*   Updated: 2024/07/07 15:53:23 by asadikog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int lar, char left, char midd, char right)
{
	int	j;

	j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_putchar(left);
		else
		{
			if (j == lar - 1)
				ft_putchar(right);
			else
				ft_putchar(midd);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'A', 'B', 'C');
		else
		{
			if (i == y - 1)
				draw_line(x, 'A', 'B', 'C');
			else
				draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
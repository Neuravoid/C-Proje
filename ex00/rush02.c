/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:47:23 by asadikog          #+#    #+#             */
/*   Updated: 2024/07/09 11:39:34 by ualkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);

void draw_line(int lar, char left, char midd, char right)
{
	int j;

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

void rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
		write(1, "HATA", 4);
	return;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'A', 'B', 'A');
		else
		{
			if (i == y - 1)
				draw_line(x, 'C', 'B', 'C');
			else
				draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:55:38 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/29 13:01:39 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	j;

	j = 0;
	if (ac < 2 || ac > 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (av[1][j])
	{
		if (av[1][j] >= 'a' && av[1][j] <= 'z')
		{
			av[1][j] -= 32;
			write (1, &av[1][j], 1);
		}
		else if (av[1][j] >= 'A' && av[1][j] <= 'Z')
		{
			av[1][j] += 32;
			write (1, &av[1][j], 1);
		}
		else
			write (1, &av[1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}

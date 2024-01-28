/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searc_and_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:41:00 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/28 14:56:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (ac > 4 || ac < 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[2][cont])
	{
		cont++;
	}
	if (cont > 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

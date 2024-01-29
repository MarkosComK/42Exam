/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:25:15 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/29 15:44:15 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	verify_char(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac < 3 || ac > 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (verify_char(av[1], av[1][i], i))
		{
			if (!(verify_char(av[2], av[1][i], ft_strlen(av[2]))))
			{
				write (1, &av[1][i], 1);
			}				
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

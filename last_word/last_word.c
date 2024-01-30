/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:58:41 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/30 15:42:18 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int ac, char **av)
{
	int	len = 0;
	int	start = 0;
	int	finish = 0;
	int	spc = 0;
	int	a = 0;
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][a])
	{
		if(av[1][a] != ' ')
			spc = 1;
		a++;
	}
	if (spc == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (av[1][len])
			len++;
		len--;
		while (av[1][len] == ' ')
			len--;
		finish = len;
		while (av[1][len] != ' ')
			len--;
		start = len + 1;
		while (av[1][start])
		{
			if (av[1][start] == ' ')
				break;
			else
				write(1, &av[1][start], 1);
			start++;
		}
		write(1, "\n", 1);
		return (0);
	}
}

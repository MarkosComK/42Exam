/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:34:53 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/28 15:48:10 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result = 0;
	int	i = 0;
	int	negative = 1;

	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		negative = -negative;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * negative);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%i\n", ft_atoi("+++12-34"));
	printf("%i\n", atoi("+++12-34"));
}
*/
